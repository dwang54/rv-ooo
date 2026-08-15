# ------------------------------------------------------------------------------
# verif/cocotb/Makefile -- Spike co-simulation driver.
#
#   make                    all tests against 00_smoke
#   make PROG=04_hazards    a different program
#   make TESTCASE=test_cosim  one test
#   make WAVES=1            dump dump.vcd
#   make sweep              IPC vs memory latency
# ------------------------------------------------------------------------------

SIM ?= verilator
TOPLEVEL_LANG ?= verilog

RTL_ROOT := $(realpath ../../rtl)
SW_BUILD ?= $(realpath ../../asmFiles/build)

VERILOG_SOURCES := \
  $(RTL_ROOT)/include/cpu_types_pkg.vh \
  $(RTL_ROOT)/mem/mem_model.sv \
  $(wildcard $(RTL_ROOT)/core/*.sv) \
  $(PWD)/tb_top.sv

TOPLEVEL := tb_top
MODULE   ?= test_core

PROG     ?= 00_smoke
DMEM_LAT ?= 4
IMEM_LAT ?= 1
RAND_LAT ?= 0
OOO_RESP ?= 0

export PROG
export SW_BUILD

COMPILE_ARGS += -GIMAGE=\"$(SW_BUILD)/$(PROG).hex\"
COMPILE_ARGS += -GDMEM_LAT=$(DMEM_LAT) -GIMEM_LAT=$(IMEM_LAT)
COMPILE_ARGS += -GRAND_LAT=$(RAND_LAT) -GOOO_RESP=$(OOO_RESP)

ifeq ($(SIM),verilator)
  EXTRA_ARGS += --trace --trace-structs --timing --assert
  EXTRA_ARGS += -Wall -Wno-fatal -Wno-DECLFILENAME -Wno-UNUSEDPARAM
  EXTRA_ARGS += +incdir+$(RTL_ROOT)/include
  ifeq ($(COVERAGE),1)
    EXTRA_ARGS += --coverage
  endif
endif

ifeq ($(WAVES),1)
  PLUSARGS += +TRACE
endif

include $(shell cocotb-config --makefiles)/Makefile.sim

SWEEP_LATS ?= 1 2 4 8 16
.PHONY: sweep lint
sweep:
	@for l in $(SWEEP_LATS); do \
	  echo "=== DMEM_LAT=$$l ==="; \
	  $(MAKE) -s clean sim DMEM_LAT=$$l PROG=$(PROG) 2>&1 | grep -E "PERF|FAIL"; \
	done

lint:
	verilator --lint-only -Wall --timing -sv -Wno-DECLFILENAME \
	  +incdir+$(RTL_ROOT)/include $(VERILOG_SOURCES) --top-module tb_top
