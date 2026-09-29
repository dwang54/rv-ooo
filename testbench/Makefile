# ------------------------------------------------------------------------------
# testbench/Makefile -- self-checking SystemVerilog unit tests.
#
#   make              run everything
#   make -j$(nproc)   run everything, builds in parallel (much faster)
#   make alu          run one
#   make list         show available targets
#
# FIRST RUN IS SLOW. Each testbench is a separate Verilator compile, so a cold
# build of all of them takes roughly a minute. Subsequent runs reuse the
# cached objects in build/ and take a second or two. Use -j to parallelize.
#
# No cocotb, no RISC-V toolchain, no Spike -- only Verilator. These run in
# seconds, which makes them the loop you actually live in. Add one testbench
# per module as you build it: finding a ROB pointer bug in a 60-line testbench
# beats finding it 4,000 instructions into a co-simulation run.
#
# Naming: tb_<module>.sv, module tb_<module>. The generic rule picks it up
# automatically -- no Makefile edit needed for a new test.
# ------------------------------------------------------------------------------

RTL    := ../rtl
INC    := +incdir+$(RTL)/include
PKG    := $(RTL)/include/cpu_types_pkg.vh
# -O0 on the generated C++: these testbenches run for microseconds of sim time,
# so simulation speed is irrelevant and compile time is what you actually wait
# for. --build-jobs parallelizes Verilator's internal C++ build.
NPROC  := $(shell nproc 2>/dev/null || echo 4)
VFLAGS := --binary --timing -sv -Wno-fatal -Wno-UNUSEDPARAM -Wno-DECLFILENAME \
          -CFLAGS "-O0" --build-jobs $(NPROC) $(INC)

# Every tb_*.sv present. Adding a file adds a target.
ALL_TB := $(patsubst tb_%.sv,%,$(wildcard tb_*.sv))

# Extra RTL each testbench needs beyond the package.
SRC_mem_model    := $(RTL)/mem/mem_model.sv
SRC_mem_ordering := $(RTL)/mem/mem_model.sv
SRC_mem_base     := $(RTL)/mem/mem_model.sv
SRC_bram         := $(RTL)/fpga/bram.sv
SRC_alu          := $(RTL)/core/alu.sv
SRC_regfile      := $(RTL)/core/regfile.sv
SRC_immgen       := $(RTL)/core/immgen.sv
SRC_brcond       := $(RTL)/core/brcond.sv
SRC_muldiv       := $(RTL)/core/muldiv.sv
SRC_pc           := $(RTL)/core/pc.sv
SRC_latches      := $(RTL)/core/latches.sv
SRC_forward      := $(RTL)/core/forward.sv
SRC_hazard       := $(RTL)/core/hazard.sv
SRC_rat          := $(RTL)/core/rat.sv
SRC_rs           := $(RTL)/core/rs.sv
SRC_rob          := $(RTL)/core/rob.sv
SRC_cdb          := $(RTL)/core/cdb.sv
SRC_lsq          := $(RTL)/core/lsq.sv
SRC_bpred        := $(RTL)/core/bpred.sv
SRC_fetch_buffer := $(RTL)/core/fetch_buffer.sv

.PHONY: all list clean $(ALL_TB)

all: $(ALL_TB)
	@echo
	@echo "all testbenches complete"

list:
	@echo "available: $(ALL_TB)"

# Skip a testbench whose RTL doesn't exist yet rather than failing the run --
# `make` in testbench/ should stay green as you build modules one at a time.
$(ALL_TB): %: tb_%.sv
	@mkdir -p build
	@missing=0; for f in $(SRC_$*); do \
	   [ -f "$$f" ] || missing=1; done; \
	 if [ "$$missing" = "1" ]; then \
	   echo "  skip  $*  (RTL not written yet: $(SRC_$*))"; \
	 else \
	   if [ ! -x build/$*/sim ]; then printf "  building %-14s ...\n" "$*"; fi; \
	   verilator $(VFLAGS) $(PKG) $(SRC_$*) tb_$*.sv --top-module tb_$* \
	     -o sim --Mdir build/$* > build/$*.log 2>&1 || \
	     { echo "  BUILD FAILED: $*  (see testbench/build/$*.log)"; \
	       tail -20 build/$*.log; exit 1; }; \
	   echo "--- $* ---"; \
	   ./build/$*/sim | grep -E "PASS|FAIL|INFO|===" || true; \
	 fi

clean:
	rm -rf build
