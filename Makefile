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

empty :=
space := $(empty) $(empty)
CC1FLAGS := -mthumb-interwork -Wimplicit -Wparentheses -O2
CPPFLAGS := -Itools/agbcc/include -iquote include -nostdinc -undef
ASFLAGS  := -mcpu=arm7tdmi -mthumb-interwork -Iasminclude

# make FS_ONLY=1: boot straight into Four Swords (does not match the original ROM)
ifneq ($(FS_ONLY),)
  CPPFLAGS += -DFS_ONLY
endif
# make NONMATCHING=1: build the functionally equivalent C kept under #ifdef NONMATCHING instead of the
# original asm (zeldaalttp_nm.gba, does not match). shortcut: asm that calls absolute addresses breaks once
# a C function changes size, so this ROM may not even link (short branches to absolute addresses go out
# of range); `make NONMATCHING=1 objects` is the check that the C compiles.
ifneq ($(NONMATCHING),)
  CPPFLAGS += -DNONMATCHING
endif
# make NONMATCHING=1 NONMATCHING_EXCLUDE="src/rom2.c ...": all NONMATCHING C except those files' (bisecting
# a bad build; one file alone can outgrow its asm and overlap .rodata)
# make NONMATCHING=1 AUTO_C=1: also replace the remaining asm functions with C translated by tools/asm2c.py
# (src/auto/, generated per object; functions it can't translate stay asm)
ifneq ($(AUTO_C),)
  CPPFLAGS += -DAUTO_C
  # AUTO_C_FILES="rom2 rom3": translate only these objects' asm (bisecting a problem)
  CPPFLAGS += $(if $(AUTO_C_FILES),-DAUTO_C_FILES_$(words $(AUTO_C_FILES))_$(subst $(space),_,$(subst /,_,$(AUTO_C_FILES))))
endif
ifneq ($(NONMATCHING_EXCLUDE),)
  CPPFLAGS += -DNONMATCHING_EXCLUDE_SOME
endif
# Rebuild C objects when CPPFLAGS change
CPPFLAGS_STAMP := .cppflags
$(shell echo '$(CPPFLAGS) $(NONMATCHING_EXCLUDE)' | cmp -s - $(CPPFLAGS_STAMP) || echo '$(CPPFLAGS) $(NONMATCHING_EXCLUDE)' > $(CPPFLAGS_STAMP))

SHA1 := $(shell { command -v sha1sum || command -v shasum; } 2>/dev/null) -c

# Build tools when building the ROM
ifeq ($(filter clean tidy,$(MAKECMDGOALS)),)
  DUMMY != make -C tools
endif

#### Files ####

ROM      := zeldaalttp$(if $(NONMATCHING),_nm).gba
ELF      := $(ROM:.gba=.elf)
MAP      := $(ROM:.gba=.map)
LDSCRIPT := ldscript.txt
# NONMATCHING builds fix .rodata at its original address (data blobs hold absolute ROM pointers) and move
# libgcc's soft-float code (reached only by symbol) after it, so the C can be a little larger than the asm
ifneq ($(NONMATCHING),)
  LDSCRIPT := ldscript_nm.txt
endif

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
# Four Swords game code was built without optimization (frame pointer in r7)
src/fs_game.o:      CC1FLAGS := $(filter-out -O2,$(CC1FLAGS))

$(foreach f,$(NONMATCHING_EXCLUDE),$(eval $(f:.c=.o): CPPFLAGS := $(filter-out -DNONMATCHING,$(CPPFLAGS))))

#### Main Targets ####

compare: $(ROM)
	$(SHA1) checksum.sha1

# All objects without linking: `make NONMATCHING=1 objects` checks that the equivalent C compiles
objects: $(OFILES)

clean: tidy
	$(RM) graphics/*/*.4bpp graphics/*/*.lz
	$(MAKE) -C tools clean

tidy:
	$(RM) $(ROM) $(ELF) $(MAP) $(OFILES) $(C_SOURCES:%.c=%.s) $(ASM_SOURCES:%.s=%.o)

# Link ELF file
ldscript_nm.txt: ldscript.txt
	python3 -c "import re,sys; s=open('ldscript.txt').read(); m=[l for l in s.splitlines(True) if re.search(r'libgcc.a:(dp|fp)-bit.o', l)]; s=''.join(l for l in s.splitlines(True) if l not in m); s=s.replace(chr(9)+'.rodata :', chr(9)+'.rodata 0x08137B04 :', 1); i=s.index('.rodata 0x08137B04'); j=s.index('} = 0', i)+len('} = 0'); s=s[:j]+chr(10)+chr(10)+chr(9)+'.text_softfloat 0x08800000 :'+chr(10)+chr(9)+'{'+chr(10)+''.join(m)+chr(9)+chr(9)+'*(.rodata.nm);'+chr(10)+chr(9)+chr(9)+'*(.text.auto);'+chr(10)+chr(9)+chr(9)+'. = ALIGN(4); __gstatetable_start = .; *(.gstatetable); __gstatetable_end = .;'+chr(10)+chr(9)+chr(9)+'__gstatetablew_start = .; *(.gstatetablew); __gstatetablew_end = .;'+chr(10)+chr(9)+'}'+s[j:]; open('ldscript_nm.txt','w').write(s)"

$(ELF): $(OFILES) $(LDSCRIPT)
	$(LD) -T $(LDSCRIPT) -Map $(MAP) $(LIB) -o $@

# Build GBA ROM
%.gba: %.elf
	$(OBJCOPY) -O binary --gap-fill 0xFF --pad-to 0x8800000 $< $@

#### Recipes ####

# C source code
# Functions not decompiled yet: asm/non_matching/NAME/*.inc, included by src/NAME.c (tools/asm_split.py)
.SECONDEXPANSION:
# Every header, coarsely: SCANINC isn't in this repo, and a stale object hides a header change.
src/%.o: src/%.c $(CPPFLAGS_STAMP) $(if $(AUTO_C),tools/asm2c.py tools/gstate2c.py include/gstate.h src/auto/gstate.list) $$(wildcard asm/non_matching/$$*/*.inc) $(wildcard include/*.h include/gba/*.h)
	$(CPP) $(CPPFLAGS) $< | $(CC1) $(CC1FLAGS) -o src/$*.s
	echo '.ALIGN 2, 0' >> src/$*.s
ifneq ($(AUTO_C),)
	@mkdir -p src/auto
	if [ -z "$(AUTO_C_FILES)" ] || echo " $(AUTO_C_FILES) " | grep -q " $* "; then \
		python3 tools/asm2c.py --s src/$*.s src/auto/$(subst /,_,$*).c --gs src/auto/gstate.list; \
	else echo '#include "auto.h"' > src/auto/$(subst /,_,$*).c; fi
	$(CPP) -Itools/agbcc/include -iquote include -nostdinc -undef src/auto/$(subst /,_,$*).c | $(CC1) -mthumb-interwork -O2 -o src/auto/$(subst /,_,$*).s
	echo '.ALIGN 2, 0' >> src/auto/$(subst /,_,$*).s
	$(AS) $(ASFLAGS) src/auto/$(subst /,_,$*).s -o src/auto/$(subst /,_,$*).o
	$(OBJCOPY) --rename-section .text=.text.auto src/auto/$(subst /,_,$*).o
	$(AS) $(ASFLAGS) src/$*.s -o src/$*.main.o
	python3 tools/gstate2c.py src/$*.main.o src/auto/gstate.list src/auto/$(subst /,_,$*)_gstate.c
	$(CPP) -Itools/agbcc/include -iquote include -nostdinc -undef src/auto/$(subst /,_,$*)_gstate.c | $(CC1) -mthumb-interwork -O2 -o src/auto/$(subst /,_,$*)_gstate.s
	echo '.ALIGN 2, 0' >> src/auto/$(subst /,_,$*)_gstate.s
	$(AS) $(ASFLAGS) src/auto/$(subst /,_,$*)_gstate.s -o src/auto/$(subst /,_,$*)_gstate.o
	$(OBJCOPY) --rename-section .text=.text.auto src/auto/$(subst /,_,$*)_gstate.o
	$(LD) -r src/$*.main.o src/auto/$(subst /,_,$*).o src/auto/$(subst /,_,$*)_gstate.o -o src/$*.o
else
	$(AS) $(ASFLAGS) src/$*.s -o src/$*.o
endif

# global-state functions of an AUTO_C build (tools/asm2c.py --gs-list)
src/auto/gstate.list: tools/asm2c.py $(CPPFLAGS_STAMP) $(wildcard asm/non_matching/*/*.inc) $(wildcard src/*.c src/*/*.c data/*.s)
	@mkdir -p src/auto
	python3 tools/asm2c.py --gs-list $@

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
