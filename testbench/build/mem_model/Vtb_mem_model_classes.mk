# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_mem_model.mk for the caller.

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
	Vtb_mem_model \
	Vtb_mem_model___024root__DepSet_hc255fd0b__0 \
	Vtb_mem_model___024root__DepSet_hff435697__0 \
	Vtb_mem_model_tb_mem_model__DepSet_h00239851__0 \
	Vtb_mem_model_mem_model__Rz1_Oz1_B0__DepSet_h5e64d8ab__0 \
	Vtb_mem_model_mem_model__Rz1_Oz1_B0__DepSet_h7b727c37__0 \
	Vtb_mem_model__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_mem_model___024root__Slow \
	Vtb_mem_model___024root__DepSet_hc255fd0b__0__Slow \
	Vtb_mem_model___024root__DepSet_hff435697__0__Slow \
	Vtb_mem_model_tb_mem_model__Slow \
	Vtb_mem_model_tb_mem_model__DepSet_hc1b13bc1__0__Slow \
	Vtb_mem_model_mem_model__Rz1_Oz1_B0__Slow \
	Vtb_mem_model_mem_model__Rz1_Oz1_B0__DepSet_h5e64d8ab__0__Slow \
	Vtb_mem_model_mem_model__Rz1_Oz1_B0__DepSet_h7b727c37__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_mem_model__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_mem_model__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
