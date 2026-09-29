#!/usr/bin/env python3
"""run_regression.py -- run every directed test and report.

This is the single entry point CI calls. It builds each program, runs the
cocotb suite against it, scrapes pass/fail and the PERF line, and writes
regression_results.json for the plotting script.

    python3 scripts/run_regression.py
    python3 scripts/run_regression.py --tests 00_smoke 04_hazards
    python3 scripts/run_regression.py --lat 1 4 16     # latency sweep
"""

from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SW = ROOT / "asmFiles"
COCOTB = ROOT / "verif" / "cocotb"

PERF_RE = re.compile(
    r"PERF (\S+): instret=(\d+) cycles=(\d+) IPC=([\d.]+) CPI=([\d.]+)")
ACC_RE = re.compile(
    r"PERF \S+: branches=(\d+) mispredicts=(\d+) accuracy=([\d.]+)%")


# crt0.S is the runtime, linked into every program -- not a test itself.
NOT_TESTS = {"crt0"}


def discover_tests() -> list[str]:
    return sorted(p.stem for p in SW.glob("*.S") if p.stem not in NOT_TESTS)


def run(cmd: list[str], cwd: Path, timeout: int = 900
        ) -> tuple[int, str]:
    try:
        p = subprocess.run(cmd, cwd=cwd, capture_output=True, text=True,
                           timeout=timeout)
        return p.returncode, p.stdout + p.stderr
    except subprocess.TimeoutExpired:
        return 124, f"TIMEOUT after {timeout}s"


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--tests", nargs="*", default=None)
    ap.add_argument("--lat", nargs="*", type=int, default=[4],
                    help="data memory latencies to sweep")
    ap.add_argument("--sim", default="verilator")
    ap.add_argument("--json", default="regression_results.json")
    args = ap.parse_args()

    tests = args.tests or discover_tests()
    if not tests:
        print("no tests found in asmFiles/", file=sys.stderr)
        return 1

    print(f"building {len(tests)} programs...")
    rc, out = run(["make", "-s"], SW)
    if rc != 0:
        print(out)
        print("SOFTWARE BUILD FAILED -- check the RISC-V toolchain and spike",
              file=sys.stderr)
        return 1

    results = []
    npass = nfail = 0

    for lat in args.lat:
        for t in tests:
            label = f"{t} (dmem_lat={lat})"
            print(f"  {label:<34}", end="", flush=True)
            t0 = time.time()
            rc, out = run(
                ["make", "-s", "sim", f"PROG={t}", f"DMEM_LAT={lat}",
                 f"SIM={args.sim}"],
                COCOTB)
            dt = time.time() - t0

            # cocotb reports failures in its summary table and via exit code
            failed = (rc != 0) or ("FAIL" in out and "PASS" not in out)
            entry: dict = {"test": t, "dmem_lat": lat, "seconds": round(dt, 1)}

            m = PERF_RE.search(out)
            if m:
                entry.update(instret=int(m.group(2)), cycles=int(m.group(3)),
                             ipc=float(m.group(4)), cpi=float(m.group(5)))
            m = ACC_RE.search(out)
            if m:
                entry.update(branches=int(m.group(1)),
                             mispredicts=int(m.group(2)),
                             br_accuracy=float(m.group(3)))

            if failed:
                nfail += 1
                entry["status"] = "FAIL"
                print(f"FAIL  ({dt:.1f}s)")
                # Surface only the diagnostic block, not the whole log.
                for line in out.splitlines():
                    if any(k in line for k in
                           ("divergence", "mismatch", "Mismatch", "Error",
                            "expected", "actual", "TIMEOUT", "no halt")):
                        print(f"      {line.strip()}")
            else:
                npass += 1
                entry["status"] = "PASS"
                extra = f"  IPC={entry['ipc']:.3f}" if "ipc" in entry else ""
                print(f"pass  ({dt:.1f}s){extra}")

            results.append(entry)

    Path(args.json).write_text(json.dumps(results, indent=2))
    print(f"\n{npass} passed, {nfail} failed  ->  {args.json}")
    return 1 if nfail else 0


if __name__ == "__main__":
    sys.exit(main())
