#!/usr/bin/env python3
"""plot_results.py -- turn regression JSON into the figures for the README.

    python3 scripts/plot_results.py
    python3 scripts/plot_results.py --ooo results_ooo.json \
                                    --baseline baseline_inorder.json

Writes PNGs to docs/figures/. Any input that doesn't exist is skipped, so this
is safe to run mid-project with only partial data.
"""
from __future__ import annotations

import argparse
import json
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
FIGS = ROOT / "docs" / "figures"


def load(path: Path) -> list[dict]:
    if not path.exists():
        return []
    return json.loads(path.read_text())


def ipc_by_latency(rows: list[dict]) -> dict[int, float]:
    """Mean IPC across programs at each memory latency."""
    acc: dict[int, list[float]] = defaultdict(list)
    for r in rows:
        if r.get("status") == "PASS" and "ipc" in r:
            acc[r["dmem_lat"]].append(r["ipc"])
    return {k: sum(v) / len(v) for k, v in sorted(acc.items()) if v}


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--ooo", default="regression_results.json")
    ap.add_argument("--baseline", default="baseline_inorder.json")
    args = ap.parse_args()

    try:
        import matplotlib
        matplotlib.use("Agg")
        import matplotlib.pyplot as plt
    except ImportError:
        print("matplotlib not installed: pip install matplotlib")
        return 1

    FIGS.mkdir(parents=True, exist_ok=True)
    ooo = load(ROOT / args.ooo)
    base = load(ROOT / args.baseline)

    if not ooo:
        print(f"no data in {args.ooo} -- run scripts/run_regression.py first")
        return 1

    # ---- IPC vs memory latency ------------------------------------------
    o = ipc_by_latency(ooo)
    b = ipc_by_latency(base)
    if len(o) > 1:
        fig, ax = plt.subplots(figsize=(7, 4.5))
        ax.plot(list(o), list(o.values()), "o-", label="out-of-order")
        if len(b) > 1:
            ax.plot(list(b), list(b.values()), "s--", label="in-order baseline")
        ax.set_xlabel("data memory latency (cycles)")
        ax.set_ylabel("IPC (mean across programs)")
        ax.set_title("IPC vs memory latency")
        ax.grid(alpha=0.3)
        ax.legend()
        fig.tight_layout()
        fig.savefig(FIGS / "ipc_vs_latency.png", dpi=150)
        print(f"wrote {FIGS / 'ipc_vs_latency.png'}")

        if len(b) > 1:
            common = sorted(set(o) & set(b))
            if common:
                print("\n  latency   in-order   out-of-order   speedup")
                for lat in common:
                    sp = o[lat] / b[lat] if b[lat] else float("nan")
                    print(f"  {lat:>7}   {b[lat]:>8.3f}   {o[lat]:>12.3f}   {sp:>6.2f}x")

    # ---- per-program IPC -------------------------------------------------
    per = defaultdict(dict)
    for r in ooo:
        if r.get("status") == "PASS" and "ipc" in r:
            per[r["test"]][r["dmem_lat"]] = r["ipc"]
    if per:
        fig, ax = plt.subplots(figsize=(7, 4.5))
        for name, series in sorted(per.items()):
            lats = sorted(series)
            ax.plot(lats, [series[x] for x in lats], "o-", label=name)
        ax.set_xlabel("data memory latency (cycles)")
        ax.set_ylabel("IPC")
        ax.set_title("IPC by program")
        ax.grid(alpha=0.3)
        ax.legend(fontsize=8)
        fig.tight_layout()
        fig.savefig(FIGS / "ipc_by_program.png", dpi=150)
        print(f"wrote {FIGS / 'ipc_by_program.png'}")

    # ---- branch accuracy -------------------------------------------------
    acc = {r["test"]: r["br_accuracy"] for r in ooo if "br_accuracy" in r}
    if acc:
        fig, ax = plt.subplots(figsize=(7, 4))
        ax.bar(list(acc), list(acc.values()))
        ax.set_ylabel("branch prediction accuracy (%)")
        ax.set_ylim(0, 100)
        ax.set_title("Branch accuracy by program")
        ax.tick_params(axis="x", rotation=30)
        fig.tight_layout()
        fig.savefig(FIGS / "branch_accuracy.png", dpi=150)
        print(f"wrote {FIGS / 'branch_accuracy.png'}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
