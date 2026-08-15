# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_mem_base.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_mem_base \
	Vtb_mem_base___024root__DepSet_h63da6506__0 \
	Vtb_mem_base___024root__DepSet_h71928799__0 \
	Vtb_mem_base_tb_mem_base__DepSet_hef032c1b__0 \
	Vtb_mem_base_mem_model__L2__DepSet_h512a0898__0 \
	Vtb_mem_base_mem_model__L2__DepSet_h3f02730f__0 \
	Vtb_mem_base__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_mem_base___024root__Slow \
	Vtb_mem_base___024root__DepSet_h63da6506__0__Slow \
	Vtb_mem_base___024root__DepSet_h71928799__0__Slow \
	Vtb_mem_base_tb_mem_base__Slow \
	Vtb_mem_base_tb_mem_base__DepSet_he4eb4e8c__0__Slow \
	Vtb_mem_base_mem_model__L2__Slow \
	Vtb_mem_base_mem_model__L2__DepSet_h512a0898__0__Slow \
	Vtb_mem_base_mem_model__L2__DepSet_h3f02730f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_mem_base__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_mem_base__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
