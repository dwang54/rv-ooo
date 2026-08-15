# ------------------------------------------------------------------------------
# asmFiles/Makefile -- assembles test programs and generates Spike golden logs.
#
#   make              build every *.S in this directory
#   make 03_branch    build one
#   make dump         show disassembly of everything
#   make new NAME=07_mytest   scaffold a new test
#
# Each program produces, in build/:
#   NAME.elf        linked binary
#   NAME.hex        $readmemh image consumed by the memory model
#   NAME.dump       disassembly -- read this when co-simulation mismatches
#   NAME.spike.log  golden commit log
#
# Writing a new test: drop a .S file in this directory with a `main:` label
# that returns 0 in a0 on success. Everything else is automatic.
# ------------------------------------------------------------------------------

RISCV_PREFIX ?= riscv-none-elf-
CC      := $(RISCV_PREFIX)gcc
OBJCOPY := $(RISCV_PREFIX)objcopy
OBJDUMP := $(RISCV_PREFIX)objdump
SPIKE   ?= spike

# rv32im: the I subset plus M for the multi-cycle functional units.
# -mno-relax keeps `la` as auipc+addi so the disassembly matches what the core
# actually fetches.
ARCH   := rv32im
ABI    := ilp32
CFLAGS := -march=$(ARCH) -mabi=$(ABI) -mno-relax -nostdlib -nostartfiles \
          -ffreestanding -O2 -Wall -Wextra -fno-builtin

BUILD := build
# Every .S except the runtime itself.
SRCS  := $(filter-out crt0.S,$(wildcard *.S))
NAMES := $(basename $(SRCS))
HEXES := $(addprefix $(BUILD)/,$(addsuffix .hex,$(NAMES)))
LOGS  := $(addprefix $(BUILD)/,$(addsuffix .spike.log,$(NAMES)))
DUMPS := $(addprefix $(BUILD)/,$(addsuffix .dump,$(NAMES)))

.PHONY: all clean dump list new
.PRECIOUS: $(BUILD)/%.elf $(BUILD)/%.bin

all: $(HEXES) $(LOGS) $(DUMPS)

list:
	@echo $(NAMES)

$(BUILD):
	@mkdir -p $(BUILD)

$(BUILD)/%.elf: %.S crt0.S link.ld | $(BUILD)
	@$(CC) $(CFLAGS) -T link.ld -o $@ crt0.S $<
	@echo "  [LD]    $@"

$(BUILD)/%.bin: $(BUILD)/%.elf
	@$(OBJCOPY) -O binary --gap-fill 0 $< $@

$(BUILD)/%.hex: $(BUILD)/%.bin
	@python3 ../scripts/bin2hex.py $< $@ --words 16384

$(BUILD)/%.dump: $(BUILD)/%.elf
	@$(OBJDUMP) -d -M numeric,no-aliases $< > $@

# Spike's default DRAM is at 0x80000000, which is why link.ld bases there --
# no -m flag needed. Errors are NOT sent to /dev/null: when this breaks you
# need to see why.
$(BUILD)/%.spike.log: $(BUILD)/%.elf
	@$(SPIKE) --isa=RV32IM -l --log-commits --log=$@ $< || { \
	  echo "  spike failed on $<. Run it by hand to see the error:"; \
	  echo "    $(SPIKE) --isa=RV32IM -l --log-commits $<"; exit 1; }
	@if [ ! -s $@ ]; then \
	  echo "ERROR: spike ran but produced an empty log for $<."; \
	  echo "  If your spike is old, --log-commits needs a build with"; \
	  echo "  ./configure --enable-commitlog"; exit 1; fi
	@echo "  [SPIKE] $@ ($$(grep -c 'core' $@) commit lines)"

define TEST_RULE
.PHONY: $(1)
$(1): $(BUILD)/$(1).hex $(BUILD)/$(1).spike.log $(BUILD)/$(1).dump
endef
$(foreach n,$(NAMES),$(eval $(call TEST_RULE,$(n))))

dump:
	@for f in $(BUILD)/*.dump; do echo "=== $$f ==="; cat $$f; done

new:
	@test -n "$(NAME)" || { echo "usage: make new NAME=07_mytest"; exit 1; }
	@test ! -f $(NAME).S || { echo "$(NAME).S already exists"; exit 1; }
	@{ \
	  echo "# $(NAME).S -- describe what this tests"; \
	  echo "    .globl main"; \
	  echo "main:"; \
	  echo "    li   t0, 1"; \
	  echo "    li   t1, 1"; \
	  echo "    bne  t0, t1, fail"; \
	  echo ""; \
	  echo "    li   a0, 0          # 0 = pass"; \
	  echo "    ret"; \
	  echo "fail:"; \
	  echo "    li   a0, 1"; \
	  echo "    ret"; \
	} > $(NAME).S
	@echo "created $(NAME).S -- edit it, then: make $(NAME)"

clean:
	rm -rf $(BUILD)
