# ------------------------------------------------------------------------------
# timing.xdc -- clock definition only. No pin assignments.
#
# This is an OUT-OF-CONTEXT constraint set: it characterizes the core's own
# critical path without an arbitrary pinout adding I/O pad delay. That is how
# IP blocks are characterized, and it is the more meaningful number to report
# for "what Fmax does this microarchitecture achieve".
#
# If you later get a board, add a separate board XDC with pin LOCs and
# IOSTANDARDs and include BOTH.
#
# Method: start at a period you expect to miss, tighten until WNS goes
# negative, and report the last passing number. Vivado will not tell you your
# Fmax -- it only tells you whether you met the constraint you gave it.
# ------------------------------------------------------------------------------

set CLK_PERIOD 10.000
create_clock -period $CLK_PERIOD -name clk [get_ports clk]

# Async reset: not timed, but must be constrained or Vivado reports thousands
# of bogus paths through it.
set_false_path -from [get_ports rst_n]

# OOC I/O budget: assume external logic consumes 40% of the period on each
# side, so the report reflects internal logic rather than unconstrained ports.
set_input_delay  -clock clk [expr {$CLK_PERIOD * 0.4}] \
  [remove_from_collection [all_inputs] [get_ports {clk rst_n}]]
set_output_delay -clock clk [expr {$CLK_PERIOD * 0.4}] [all_outputs]
