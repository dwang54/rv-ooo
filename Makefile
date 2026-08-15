# ------------------------------------------------------------------------------
# rv-ooo -- out-of-order RISC-V core
#
#   make check      verify the toolchain
#   make unit       SystemVerilog unit tests (seconds, Verilator only)
#   make asm        assemble test programs + Spike golden logs
#   make test       full co-simulation regression
#   make lint       Verilator + Verible
#   make synth      Yosys area/synthesizability check
#   make sweep      IPC vs memory latency
#   make waves PROG=04_hazards
#   make progress   milestone checkpoint status
# ------------------------------------------------------------------------------

.PHONY: all check unit asm test regress lint fmt synth sweep waves progress clean setup

all: lint unit asm test

check:
	@bash scripts/check_env.sh

setup:
	@bash scripts/setup.sh

unit:
	@$(MAKE) -s -C testbench

asm:
	@$(MAKE) -s -C asmFiles

test: unit asm
	@python3 scripts/run_regression.py

regress: test

lint:
	@$(MAKE) -s -C verif/cocotb lint
	@command -v verible-verilog-lint >/dev/null 2>&1 && \
	  verible-verilog-lint --rules_config .verible-lint.rules \
	    rtl/include/*.vh rtl/core/*.sv rtl/mem/*.sv rtl/fpga/*.sv 2>/dev/null || \
	  echo "  (verible not installed -- skipping style lint)"

fmt:
	verible-verilog-format --inplace \
	  rtl/include/*.vh rtl/core/*.sv rtl/mem/*.sv rtl/fpga/*.sv testbench/*.sv

synth:
	@bash scripts/synth_check.sh

sweep: asm
	@$(MAKE) -C verif/cocotb sweep PROG=$(or $(PROG),04_hazards)

waves: asm
	@$(MAKE) -C verif/cocotb WAVES=1 PROG=$(or $(PROG),00_smoke)
	@echo "open verif/cocotb/dump.vcd"

# Exit code is meaningful (nonzero = work remaining), so do not fail the make.
progress:
	-@python3 scripts/week1_check.py

clean:
	@$(MAKE) -s -C asmFiles clean
	@$(MAKE) -s -C testbench clean
	@$(MAKE) -s -C verif/cocotb clean 2>/dev/null || true
	rm -rf verif/cocotb/sim_build verif/cocotb/__pycache__ synth/build
	rm -f verif/cocotb/dump.vcd results.xml regression_results.json
