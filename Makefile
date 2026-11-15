#### Tools ####

# Get rid of the idiotic built-in rules
.SUFFIXES:

# Stop deleting my files
.PRECIOUS: %.4bpp


#### Tools ####

GBAGFX   := tools/gbagfx/gbagfx
CC1      := tools/agbcc/bin/agbcc
CC1_OLD  := tools/agbcc/bin/old_agbcc
SHELL    := /bin/bash -o pipefail
# Distro binutils packages have no arm-none-eabi-cpp; the host cpp only preprocesses, so it works the same.
CPP      := $(if $(DEVKITARM),$(DEVKITARM)/bin/arm-none-eabi-cpp,cpp)
AS       := $(DEVKITARM)/bin/arm-none-eabi-as
LD       := $(DEVKITARM)/bin/arm-none-eabi-ld
OBJCOPY  := $(DEVKITARM)/bin/arm-none-eabi-objcopy

CC1FLAGS := -mthumb-interwork -Wimplicit -Wparentheses -O2
CPPFLAGS := -Itools/agbcc/include -iquote include -nostdinc -undef
ASFLAGS  := -mcpu=arm7tdmi -mthumb-interwork -Iasminclude

# make FS_ONLY=1: boot straight into Four Swords (does not match the original ROM)
ifneq ($(FS_ONLY),)
  CPPFLAGS += -DFS_ONLY
endif
# Rebuild C objects when CPPFLAGS change
CPPFLAGS_STAMP := .cppflags
$(shell echo '$(CPPFLAGS)' | cmp -s - $(CPPFLAGS_STAMP) || echo '$(CPPFLAGS)' > $(CPPFLAGS_STAMP))

SHA1 := $(shell { command -v sha1sum || command -v shasum; } 2>/dev/null) -c

# Build tools when building the ROM
ifeq ($(filter clean tidy,$(MAKECMDGOALS)),)
  DUMMY != make -C tools
endif

#### Files ####

ROM      := zeldaalttp.gba
ELF      := $(ROM:.gba=.elf)
MAP      := $(ROM:.gba=.map)
LDSCRIPT := ldscript.txt

SUBDIRS := \
        src \
		src/lttp \
		asm/lttp \
        asm \
        data

C_SOURCES   := $(foreach dir, $(SUBDIRS), $(wildcard $(dir)/*.c))
ASM_SOURCES := $(foreach dir, $(SUBDIRS), $(wildcard $(dir)/*.s))

C_OBJECTS   := $(C_SOURCES:%.c=%.o)
ASM_OBJECTS := $(ASM_SOURCES:%.s=%.o)

SOURCES  := $(C_SOURCES) $(ASM_SOURCES)
OFILES   := $(C_OBJECTS) $(ASM_OBJECTS)

LIB := tools/agbcc/lib/libgcc.a tools/agbcc/lib/libc.a

ifeq ($(NODEP),)
  src/%.o:  C_DEP   = $(shell $(SCANINC) -I include src/$(*F).c)
  asm/%.o:  ASM_DEP = $(shell $(SCANINC) -I asminclude asm/$(*F).s)
  data/%.o: ASM_DEP = $(shell $(SCANINC) -I asminclude data/$(*F).s)
endif

src/rom_0800D4F0.o: CC1FLAGS += -fprologue-bugfix
src/main_2.o:       CC1FLAGS += -fprologue-bugfix
src/math.o:         CC1FLAGS += -fprologue-bugfix
src/main.o:         CC1FLAGS += -fprologue-bugfix
src/file_select.o:  CC1FLAGS += -fprologue-bugfix
src/rom2.o:         CC1FLAGS += -fprologue-bugfix
#src/interface.o: CC1FLAGS += -fprologue-bugfix

#### Main Targets ####

compare: $(ROM)
	$(SHA1) checksum.sha1

clean: tidy
	$(RM) graphics/*/*.4bpp graphics/*/*.lz
	$(MAKE) -C tools clean

tidy:
	$(RM) $(ROM) $(ELF) $(MAP) $(OFILES) $(C_SOURCES:%.c=%.s) $(ASM_SOURCES:%.s=%.o)

# Link ELF file
$(ELF): $(OFILES) $(LDSCRIPT)
	$(LD) -T $(LDSCRIPT) -Map $(MAP) $(LIB) -o $@

# Build GBA ROM
%.gba: %.elf
	$(OBJCOPY) -O binary --gap-fill 0xFF --pad-to 0x8800000 $< $@

#### Recipes ####

# C source code
src/%.o: src/%.c $(CPPFLAGS_STAMP)
	$(CPP) $(CPPFLAGS) $< | $(CC1) $(CC1FLAGS) -o src/$*.s
	echo '.ALIGN 2, 0' >> src/$*.s
	$(AS) $(ASFLAGS) src/$*.s -o src/$*.o

# Assembly source code
asm/%.o: asm/%.s
	$(AS) $(ASFLAGS) $< -o $@

data/%.o: data/%.s
	$(AS) $(ASFLAGS) $< -o $@

# Graphics files
%.4bpp: %.png
	$(GBAGFX) $< $@
%.gbapal: %.pal
	$(GBAGFX) $< $@
%.lz: %
	$(GBAGFX) $< $@

%.h: ;
%.inc: ;

include gfxdep.mk
