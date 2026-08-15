#!/usr/bin/env bash
# ------------------------------------------------------------------------------
# check_env.sh -- verify the toolchain before blaming the design.
#
# Run this first whenever something behaves strangely. A missing tool or a
# stale PATH produces failures that look exactly like RTL bugs, and this
# separates the two in about two seconds.
# ------------------------------------------------------------------------------

PASS=0
FAIL=0
WARN=0

ok()   { printf '  \033[0;32mok\033[0m      %-24s %s\n' "$1" "$2"; PASS=$((PASS+1)); }
bad()  { printf '  \033[0;31mMISSING\033[0m %-24s %s\n' "$1" "$2"; FAIL=$((FAIL+1)); }
warn() { printf '  \033[0;33mwarn\033[0m    %-24s %s\n' "$1" "$2"; WARN=$((WARN+1)); }

have() { command -v "$1" >/dev/null 2>&1; }

echo
echo "Tomasulo-RV environment check"
echo "============================="

# ---------------------------------------------------------------- platform --
echo
echo "platform"
if grep -qi microsoft /proc/version 2>/dev/null; then
  if [ -n "${WSL_DISTRO_NAME:-}" ]; then
    ok "WSL" "$WSL_DISTRO_NAME"
  else
    ok "WSL" "detected"
  fi
  # The single most expensive misconfiguration: repo on the Windows filesystem.
  case "$PWD" in
    /mnt/*)
      warn "repo location" "$PWD is on the Windows filesystem -- builds will be
                            very slow. Move the repo to ~/projects/." ;;
    *) ok "repo location" "$PWD (Linux filesystem)" ;;
  esac
else
  ok "platform" "$(uname -s) $(uname -m)"
fi

# ------------------------------------------------------------- simulation --
echo
echo "simulation"
if have verilator; then
  VV=$(verilator --version 2>&1 | awk '{print $2}')
  case "$VV" in
    5.*) ok "verilator" "$VV" ;;
    *)   warn "verilator" "$VV -- 5.x recommended (--binary needs it)" ;;
  esac
else
  bad "verilator" "sudo apt install verilator"
fi

have iverilog && ok "iverilog" "$(iverilog -V 2>&1 | head -1 | awk '{print $4}')" \
              || warn "iverilog" "optional fallback simulator"

if have gtkwave || have surfer; then
  have gtkwave && ok "waveform viewer" "gtkwave" || ok "waveform viewer" "surfer"
else
  warn "waveform viewer" "sudo apt install gtkwave"
fi

# ----------------------------------------------------------------- python --
echo
echo "python"
if have python3; then
  ok "python3" "$(python3 --version 2>&1 | awk '{print $2}')"
else
  bad "python3" "sudo apt install python3"
fi

if python3 -c "import cocotb" 2>/dev/null; then
  ok "cocotb" "$(python3 -c 'import cocotb;print(cocotb.__version__)' 2>/dev/null)"
else
  bad "cocotb" "pip install 'cocotb>=1.9'"
fi

have cocotb-config && ok "cocotb-config" "on PATH" \
  || bad "cocotb-config" "add ~/.local/bin to PATH"

python3 -c "import pytest" 2>/dev/null && ok "pytest" "present" \
  || bad "pytest" "pip install pytest"

# ------------------------------------------------------------ riscv tools --
echo
echo "riscv toolchain"
PREFIX="${RISCV_PREFIX:-}"
if [ -z "$PREFIX" ]; then
  for p in riscv32-unknown-elf- riscv-none-elf- riscv64-unknown-elf-; do
    have "${p}gcc" && PREFIX="$p" && break
  done
fi

if [ -n "$PREFIX" ] && have "${PREFIX}gcc"; then
  ok "${PREFIX}gcc" "$(${PREFIX}gcc -dumpversion 2>/dev/null)"
  [ -z "${RISCV_PREFIX:-}" ] && \
    warn "RISCV_PREFIX" "unset -- add 'export RISCV_PREFIX=$PREFIX' to ~/.bashrc"
  # rv32im must actually be a supported target, not just gcc being present.
  if echo 'int main(){return 0;}' | \
     ${PREFIX}gcc -march=rv32im -mabi=ilp32 -nostdlib -x c - -o /tmp/_rvchk 2>/dev/null
  then
    ok "rv32im target" "compiles"
    rm -f /tmp/_rvchk
  else
    bad "rv32im target" "gcc present but cannot target rv32im/ilp32"
  fi
else
  bad "riscv gcc" "see docs/SETUP_WSL.md step 8"
fi

# Guard on PREFIX being non-empty: without it these would match the host's
# own objcopy/objdump and report a toolchain that isn't there.
if [ -n "$PREFIX" ]; then
  have "${PREFIX}objcopy" && ok "objcopy" "${PREFIX}objcopy" \
    || bad "objcopy" "part of the riscv toolchain"
  have "${PREFIX}objdump" && ok "objdump" "${PREFIX}objdump" \
    || bad "objdump" "part of the riscv toolchain"
else
  bad "objcopy" "no riscv toolchain prefix found"
  bad "objdump" "no riscv toolchain prefix found"
fi

# ------------------------------------------------------------------ spike --
echo
echo "reference model"
if have spike; then
  ok "spike" "$(spike --help 2>&1 | head -1 | cut -c1-40)"
else
  bad "spike" "see docs/SETUP_WSL.md step 9"
fi

# ------------------------------------------------------------- synthesis ----
echo
echo "synthesis (optional until week 8)"
have yosys && ok "yosys" "$(yosys -V 2>&1 | awk '{print $2}')" \
  || warn "yosys" "sudo apt install yosys"
have sv2v && ok "sv2v" "$(sv2v --version 2>&1 | awk '{print $2}')" \
  || warn "sv2v" "needed for yosys -- see synth/README.md"

# ------------------------------------------------------------------ extra --
echo
echo "optional"
have verible-verilog-lint && ok "verible" "present" \
  || warn "verible" "style linting will be skipped"
have git && ok "git" "$(git --version | awk '{print $3}')" || bad "git" "sudo apt install git"

# ---------------------------------------------------------------- summary --
echo
echo "============================="
printf '  %d ok, %d warnings, %d missing\n' "$PASS" "$WARN" "$FAIL"
echo

if [ "$FAIL" -gt 0 ]; then
  echo "  Not ready. Install what's missing above, then re-run."
  exit 1
fi
echo "  Environment ready. Next: make unit && make sw && make test"
exit 0
