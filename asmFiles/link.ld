/* ---------------------------------------------------------------------------
 * link.ld -- memory map for Tomasulo-RV
 *
 * Base address is 0x80000000, matching Spike's default DRAM location and the
 * riscv-tests convention. Do not move this to 0x0: Spike places its own boot
 * ROM at 0x1000, so a RAM region based at zero overlaps it and produces
 * "Memory address is invalid" errors -- or worse, silently wrong fetches once
 * a program grows past 4 KB.
 *
 * The `tohost` symbol is the HTIF convention understood natively by Spike: a
 * store of a non-zero value terminates the program. The RTL decodes the same
 * address and asserts `halted`, so one binary ends both simulations
 * identically.
 * ------------------------------------------------------------------------- */
OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
  RAM (rwx) : ORIGIN = 0x80000000, LENGTH = 64K
}

SECTIONS
{
  . = ORIGIN(RAM);

  .text : {
    *(.text.init)          /* crt0 must be first -- reset PC is ORIGIN(RAM) */
    *(.text .text.*)
  } > RAM

  . = ALIGN(4);
  .rodata : { *(.rodata .rodata.*) } > RAM
  .data   : { *(.data .data.*) *(.sdata .sdata.*) } > RAM

  . = ALIGN(4);
  .bss (NOLOAD) : {
    __bss_start = .;
    *(.bss .bss.*) *(.sbss .sbss.*) *(COMMON)
    __bss_end = .;
  } > RAM

  /* HTIF handshake region at a fixed offset so the RTL can hard-decode it.
   * NOLOAD keeps it out of the binary image -- without it, objcopy gap-fills
   * everything from .data up to here and you get a 60 KB file of zeros. */
  .htif ORIGIN(RAM) + 0xF000 (NOLOAD) : {
    tohost   = .; . += 8;
    fromhost = .; . += 8;
  } > RAM

  /* Stack grows down from the top of RAM */
  __stack_top = ORIGIN(RAM) + LENGTH(RAM) - 16;

  /DISCARD/ : { *(.comment) *(.note.*) *(.riscv.attributes) }
}
