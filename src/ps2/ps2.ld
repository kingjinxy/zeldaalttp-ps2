/* PS2 link: ps2sdk's linkfile plus the GBA address space.
   The GBA ROM data (data/*.s) is linked at its original addresses (VMA 0x08xxxxxx, raw pointers in it stay valid)
   and loaded at physical 0x01000000 + (VMA - 0x08000000); src/ps2/tlb.c maps 0x08000000 there at startup.
   tools/ps2/fix_elf.py sets those segments' p_vaddr to p_paddr so loaders write physical memory.
   GBA RAM symbols are absolute (build/ps2/gba_syms.ld): EWRAM, IWRAM etc. are TLB-mapped RAM blocks. */
ENTRY(__start);
PHDRS {
  text PT_LOAD;
  gbarom PT_LOAD;
}
SECTIONS {
	.text 0x00100000: {
		_ftext = . ;
		*(.text)
		*(.text.*)
		*(.gnu.linkonce.t*)
		KEEP(*(.init))
		KEEP(*(.fini))
		QUAD(0)
	} :text
	PROVIDE(_etext = .);
	PROVIDE(etext = .);
	.ctors ALIGN(16): { KEEP(*crtbegin*.o(.ctors)) KEEP(*(EXCLUDE_FILE(*crtend*.o) .ctors)) KEEP(*(SORT(.ctors.*))) KEEP(*(.ctors)) }
	.dtors ALIGN(16): { KEEP(*crtbegin*.o(.dtors)) KEEP(*(EXCLUDE_FILE(*crtend*.o) .dtors)) KEEP(*(SORT(.dtors.*))) KEEP(*(.dtors)) }
	.reginfo : { *(.reginfo) }
	.data ALIGN(128): {
		_fdata = . ;
		*(.data)
		*(.data.*)
		*(.gnu.linkonce.d*)
		SORT(CONSTRUCTORS)
	}
	.rodata ALIGN(128): {
		*(EXCLUDE_FILE(*build/ps2/data/*.o *gbarom.o) .rodata)
		*(EXCLUDE_FILE(*build/ps2/data/*.o *gbarom.o) .rodata.*)
		*(.gnu.linkonce.r*)
	}
	/* global-state lookup tables (sorted at startup) */
	.gstatetable ALIGN(16): {
		__gstatetable_start = .; *(.gstatetable); __gstatetable_end = .;
		__gstatetablew_start = .; *(.gstatetablew); __gstatetablew_end = .;
	}
	.rdata ALIGN(128): { *(.rdata) }
	.gcc_except_table ALIGN(128): { *(.gcc_except_table) }
	_gp = ALIGN(128) + 0x7ff0;
	.lit4 ALIGN(128): { *(.lit4) }
	.lit8 ALIGN(128): { *(.lit8) }
	.sdata ALIGN(128): { *(.sdata) *(.sdata.*) *(.gnu.linkonce.s*) }
	_edata = .;
	PROVIDE(edata = .);
	.sbss ALIGN(128) : { _fbss = . ; *(.sbss) *(.sbss.*) *(.gnu.linkonce.sb*) *(.scommon) }
	.bss ALIGN(128) : { *(.bss) *(.bss.*) *(.gnu.linkonce.b*) *(COMMON) }
	_end_bss = .;
	_end = . ;
	PROVIDE(end = .);

	/* GBA ROM: the code area and two small C-data gaps from the ROM file (gbarom.S), the data objects linked */
	.gba_code 0x08000000 : AT(0x01000000) { *gbarom.o(.gba_code) } :gbarom
	.gba_data0 0x08137B04 : AT(0x01137B04) { build/ps2/data/data.o(.rodata) } :gbarom
	.gba_gap0 0x0842731C : AT(0x0142731C) { *gbarom.o(.gba_gap0) } :gbarom
	.gba_data1 0x0842735C : AT(0x0142735C) { build/ps2/data/data_842735C.o(.rodata) } :gbarom
	.gba_gap1 0x0842748C : AT(0x0142748C) { *gbarom.o(.gba_gap1) } :gbarom
	.gba_data2 0x084274AC : AT(0x014274AC) { build/ps2/data/data_84274AC.o(.rodata) } :gbarom
	.gba_data3 0x08641608 : AT(0x01641608) { build/ps2/data/4swords_text.o(.rodata) } :gbarom

	.spad 0x70000000: { *(.spad) }

	/* below the GBA blocks at 0x01000000: stack under them, heap from _end */
	PROVIDE(_stack = 0x00FF0000);
	PROVIDE(_stack_size = 256 * 1024);
	PROVIDE(_heap_size = 0x00FF0000 - 256 * 1024 - _end);
}
INCLUDE "build/ps2/gba_syms.ld"
