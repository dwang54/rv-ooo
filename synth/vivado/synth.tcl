# ------------------------------------------------------------------------------
# synth.tcl -- out-of-context synthesis + implementation, no board required.
#
#   vivado -mode batch -source synth/vivado/synth.tcl
#   vivado -mode batch -source synth/vivado/synth.tcl -tclargs 8.0
#     (the optional argument is the clock period in ns)
#
# Produces, in synth/reports/:
#   utilization.rpt   LUT / FF / BRAM / DSP counts
#   timing.rpt        WNS and the critical path, with net names
#   timing_summary.rpt
#   power.rpt
#
# WNS is what you care about. Positive = met the constraint. Fmax is then
# 1000 / (period - WNS) MHz.
# ------------------------------------------------------------------------------

set root [file normalize [file join [file dirname [info script]] ../..]]
set part xc7a100tcsg324-1
set top  core_top

set period 10.0
if {$argc > 0} { set period [lindex $argv 0] }

puts "\n=== synthesizing $top for $part at ${period}ns ===\n"

file mkdir $root/synth/reports
file mkdir $root/synth/build

create_project -in_memory -part $part

# ---- sources -----------------------------------------------------------------
read_verilog -sv [glob $root/rtl/include/cpu_types_pkg.vh]
foreach f [glob -nocomplain $root/rtl/include/*_if.vh] { read_verilog -sv $f }
foreach f [glob -nocomplain $root/rtl/core/*.sv]        { read_verilog -sv $f }
foreach f [glob -nocomplain $root/rtl/fpga/*.sv]        { read_verilog -sv $f }
set_property include_dirs $root/rtl/include [current_fileset]

# ---- constraints -------------------------------------------------------------
# Written out rather than read directly so the period argument takes effect.
set xdc $root/synth/build/_period.xdc
set fh [open $xdc w]
puts $fh "create_clock -period $period -name clk \[get_ports clk\]"
puts $fh "set_false_path -from \[get_ports rst_n\]"
puts $fh "set_input_delay  -clock clk [expr {$period * 0.4}] \[remove_from_collection \[all_inputs\] \[get_ports {clk rst_n}\]\]"
puts $fh "set_output_delay -clock clk [expr {$period * 0.4}] \[all_outputs\]"
close $fh
read_xdc $xdc

# ---- run ---------------------------------------------------------------------
# -mode out_of_context: no I/O buffers inserted, so the report measures the
# core's logic rather than pad delays.
synth_design -top $top -part $part -mode out_of_context -flatten_hierarchy rebuilt

report_utilization -hierarchical -file $root/synth/reports/utilization_synth.rpt

opt_design
place_design
phys_opt_design
route_design

# ---- reports -----------------------------------------------------------------
report_utilization   -hierarchical -file $root/synth/reports/utilization.rpt
report_timing_summary              -file $root/synth/reports/timing_summary.rpt
report_timing -sort_by group -max_paths 10 -path_type summary \
                                   -file $root/synth/reports/timing.rpt
report_power                       -file $root/synth/reports/power.rpt
report_ram_utilization             -file $root/synth/reports/ram.rpt

# ---- headline numbers --------------------------------------------------------
set wns [get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]]
set fmax [expr {1000.0 / ($period - $wns)}]
set luts [llength [get_cells -hier -filter {PRIMITIVE_GROUP == LUT}]]
set ffs  [llength [get_cells -hier -filter {PRIMITIVE_GROUP == FLOP_LATCH}]]
set brams [llength [get_cells -hier -filter {PRIMITIVE_GROUP == BLOCKRAM}]]
set dsps [llength [get_cells -hier -filter {PRIMITIVE_GROUP == ARITHMETIC}]]

puts "\n============================================"
puts [format "  constraint : %.3f ns (%.1f MHz)" $period [expr {1000.0/$period}]]
puts [format "  WNS        : %.3f ns" $wns]
puts [format "  Fmax       : %.1f MHz" $fmax]
puts [format "  LUTs       : %d" $luts]
puts [format "  FFs        : %d" $ffs]
puts [format "  BRAM       : %d" $brams]
puts [format "  DSP        : %d" $dsps]
puts "============================================\n"

if {$wns < 0} {
  puts "TIMING NOT MET. Read synth/reports/timing.rpt for the failing path."
  puts "On this design the usual culprit is the CDB broadcast net.\n"
}

# Machine-readable, so scripts/plot_results.py can chart Fmax across milestones.
set jf [open $root/synth/reports/summary.json w]
puts $jf "{\"period_ns\": $period, \"wns_ns\": $wns, \"fmax_mhz\": $fmax,"
puts $jf " \"luts\": $luts, \"ffs\": $ffs, \"bram\": $brams, \"dsp\": $dsps}"
close $jf

puts "reports written to synth/reports/"
