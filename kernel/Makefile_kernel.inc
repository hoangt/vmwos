CC = gcc
AS = as
AR = ar
RANLIB = ranlib
ASFLAGS = -mcpu=arm1176jzf-s
CFLAGS = -O2 -Wall -mcpu=arm1176jzf-s -marm -nostartfiles -ffreestanding -nostdlib
LFLAGS = --no-undefined -T $(LINKER_SCRIPT)
