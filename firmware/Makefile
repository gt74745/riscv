CROSS_COMPILE:=riscv32-unknown-elf-
CC:=$(CROSS_COMPILE)gcc
LD:=$(CROSS_COMPILE)gcc
AS:=$(CROSS_COMPILE)gcc

SOURCES:=./src/

OBJS:= \
	$(SOURCES)reset.o \

LSCRIPT:=main.ld

OBJCOPY:=$(CROSS_COMPILE)objcopy
OBJDUMP:=$(CROSS_COMPILE)objdump

CFLAGS:=-g -ggdb -Wall -Wno-main -Wstack-usage=2048 -ffreestanding -Wno-unused -nostdlib
CFLAGS+=-I/usr/local/include/ -march=rv32i -mabi=ilp32 -fno-builtin-printf -DUSE_PLIC -DUSE_M_TIME -g -mcmodel=medany
LDFLAGS:=-T $(LSCRIPT) -Wl,-gc-sections -Wl,-Map=image.map -march=rv32i -mabi=ilp32 -mcmodel=medany
ASFLAGS:=$(CFLAGS)

all: ucode.hex

dump: image.elf
	$(OBJDUMP) -d $< > $@

ucode.hex: image.bin
	od $< -v -A non -w4 -t x1 | cut -c2-12 > ../obj_dir/$@

image.bin: image.elf
	$(OBJCOPY) -O binary $< $@

image.elf: $(OBJS) $(LSCRIPT)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)

clean:
	rm -f *.o *.elf *.bin *.map *dump *.mem
