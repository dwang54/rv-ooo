#!/usr/bin/env bash
# ------------------------------------------------------------------------------
# synth_check.sh -- fast synthesizability + area check.
#
# Two stages:
#   1. sv2v   SystemVerilog -> Verilog-2005
#   2. yosys  synthesize, count cells
#
# The sv2v step is not optional. Yosys' own SystemVerilog frontend cannot parse
# packages, interfaces, structs, or enums -- everything this project's RTL is
# built from. sv2v is the standard bridge in the open-source flow.
#
# This is a fast sanity check, NOT a substitute for Vivado. Cell counts here
# are approximate and should not be reported. What it catches, in seconds:
#   - non-synthesizable constructs slipping into rtl/core
#   - accidental latches
#   - sudden area blowups from a wide mux or an unintended replication
# ------------------------------------------------------------------------------
set -uo pipefail
cd "$(dirname "$0")/.."

MISSING=0
for t in sv2v yosys; do
  if ! command -v $t >/dev/null 2>&1; then
    echo "  $t not installed"
    MISSING=1
  fi
done
if [ "$MISSING" = "1" ]; then
  cat <<'HINT'

  Install both:
    sudo apt install -y yosys
    # sv2v: prebuilt binary, no Haskell toolchain needed
    curl -sL -o /tmp/sv2v.zip \
      https://github.com/zachjs/sv2v/releases/latest/download/sv2v-Linux.zip
    unzip -o /tmp/sv2v.zip -d /tmp
    sudo install /tmp/sv2v-Linux/sv2v /usr/local/bin/

HINT
  exit 0
fi

mkdir -p synth/build synth/reports
LOG=synth/reports/yosys.log
FLAT=synth/build/core_flat.v

# ---- stage 1: sv2v -----------------------------------------------------------
SRCS="rtl/include/cpu_types_pkg.vh"
for f in rtl/include/*_if.vh rtl/core/*.sv rtl/fpga/*.sv; do
  [ -e "$f" ] && SRCS="$SRCS $f"
done

# shellcheck disable=SC2086
if ! sv2v -I rtl/include $SRCS > "$FLAT" 2> synth/reports/sv2v.log; then
  echo "sv2v FAILED -- the RTL is not valid SystemVerilog, or uses a construct"
  echo "sv2v does not support:"
  echo
  head -20 synth/reports/sv2v.log
  exit 1
fi

# ---- stage 2: yosys ----------------------------------------------------------
if ! yosys synth/yosys/synth.ys > "$LOG" 2>&1; then
  echo "SYNTHESIS FAILED. Common causes:"
  echo "  - initial block or delay (#) inside rtl/core (simulation-only code)"
  echo "  - unbounded while loop"
  echo "  - a signal read but never assigned"
  echo
  grep -iE "^ERROR|Warning: Wire .* is used but never assigned" "$LOG" | head -12
  exit 1
fi

echo "--- cell counts (approximate -- report Vivado's numbers, not these) ---"
# Take only the LAST stat block: synth_xilinx prints intermediate ones.
awk '/=== core_top ===/{buf=""} {buf = buf $0 ORS} END{printf "%s", buf}' "$LOG" \
  | grep -E "Number of cells|LUT[1-6] +[0-9]|FD[CRSPE]+ +[0-9]|RAMB|DSP48|CARRY4 +[0-9]" \
  | head -14

CELLS=$(grep -oP 'Number of cells:\s+\K[0-9]+' "$LOG" | tail -1)
if [ -n "${CELLS:-}" ]; then
  REV=$(git rev-parse --short HEAD 2>/dev/null || echo nogit)
  echo "$(date +%F) $REV $CELLS" >> synth/reports/area_history.txt
  echo
  echo "cells: $CELLS   (trend in synth/reports/area_history.txt)"
fi

# Latches are almost always a bug in this design -- an incomplete if or case
# in an always_comb block. Match only INSTANTIATED latch cells in the final
# stat block, not the library-loading chatter that mentions LDCE by name.
if awk '/=== core_top ===/{f=1} f' "$LOG" | grep -qE '^ +(LDCE|LDPE|\$_DLATCH_[A-Z]*) +[0-9]+'; then
  echo
  echo "WARNING: latches inferred. Look for an always_comb with an incomplete"
  echo "         if/case -- every output must be assigned on every path."
fi
