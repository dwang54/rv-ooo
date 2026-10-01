#!/usr/bin/env bash
# ------------------------------------------------------------------------------
# setup.sh -- install the toolchain. Ubuntu/Debian and macOS (Homebrew).
#
# The one slow step is the RISC-V GNU toolchain. If you would rather not spend
# 30-40 minutes compiling it, grab a prebuilt xPack release instead -- see the
# note near the bottom.
# ------------------------------------------------------------------------------
set -euo pipefail

OS="$(uname -s)"
say() { printf '\n\033[1;34m==>\033[0m %s\n' "$*"; }
have() { command -v "$1" >/dev/null 2>&1; }

# ---------------------------------------------------------------- base pkgs --
if [ "$OS" = "Linux" ]; then
  say "installing base packages (apt)"
  sudo apt-get update
  sudo apt-get install -y \
    build-essential git python3 python3-pip python3-venv \
    verilator iverilog gtkwave \
    autoconf automake autotools-dev curl libmpc-dev libmpfr-dev libgmp-dev \
    gawk bison flex texinfo gperf libtool patchutils bc zlib1g-dev \
    libexpat-dev device-tree-compiler ninja-build cmake
elif [ "$OS" = "Darwin" ]; then
  say "installing base packages (brew)"
  brew install verilator icarus-verilog gtkwave python@3.12 \
    dtc cmake ninja libtool gawk gnu-sed
else
  echo "unsupported OS: $OS" >&2; exit 1
fi

# --------------------------------------------------------------- python env --
say "python packages"
python3 -m pip install --user --upgrade \
  'cocotb>=1.9,<2' cocotb-bus cocotb-coverage pytest matplotlib

# ------------------------------------------------------------------- verible --
if ! have verible-verilog-lint; then
  say "verible (SystemVerilog lint + formatter)"
  echo "  download a release from https://github.com/chipsalliance/verible/releases"
  echo "  and put the bin/ directory on your PATH"
fi

# ------------------------------------------------------ riscv gnu toolchain --
if have riscv32-unknown-elf-gcc; then
  say "riscv32-unknown-elf-gcc already present -- skipping"
else
  say "building riscv-gnu-toolchain (this takes a while)"
  echo "  Faster alternative: prebuilt binaries from"
  echo "    https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases"
  echo "  (note the different prefix: riscv-none-elf-  -- if you use those, set"
  echo "   RISCV_PREFIX=riscv-none-elf- when calling make)"
  echo
  read -r -p "  build from source now? [y/N] " ans
  if [ "${ans:-N}" = "y" ]; then
    PREFIX="${RISCV:-$HOME/riscv}"
    git clone --depth 1 https://github.com/riscv/riscv-gnu-toolchain \
      "$HOME/src/riscv-gnu-toolchain" || true
    pushd "$HOME/src/riscv-gnu-toolchain"
    ./configure --prefix="$PREFIX" --with-arch=rv32im --with-abi=ilp32
    make -j"$(nproc 2>/dev/null || sysctl -n hw.ncpu)"
    popd
    echo "  add to your shell rc:  export PATH=\$PATH:$PREFIX/bin"
  fi
fi

# ---------------------------------------------------------------- spike ISS --
if have spike; then
  say "spike already present -- skipping"
else
  say "building spike (riscv-isa-sim) -- the golden reference model"
  PREFIX="${RISCV:-$HOME/riscv}"
  git clone --depth 1 https://github.com/riscv-software-src/riscv-isa-sim \
    "$HOME/src/riscv-isa-sim" || true
  pushd "$HOME/src/riscv-isa-sim"
  mkdir -p build && cd build
  ../configure --prefix="$PREFIX"
  make -j"$(nproc 2>/dev/null || sysctl -n hw.ncpu)"
  make install
  popd
  echo "  add to your shell rc:  export PATH=\$PATH:$PREFIX/bin"
fi

say "checking"
for t in verilator iverilog gtkwave riscv32-unknown-elf-gcc spike; do
  if have "$t"; then printf '  ok      %s\n' "$t"
  else printf '  MISSING %s\n' "$t"; fi
done
python3 -c "import cocotb; print('  ok      cocotb', cocotb.__version__)" \
  2>/dev/null || echo "  MISSING cocotb"

say "done -- try: make unit && make asm && make test"
