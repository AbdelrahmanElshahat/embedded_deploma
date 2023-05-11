CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
all: Learn-in-depth.bin

%.o : %.s
	$(CC)as  -mcpu=arm926ej-s -o $@ $<
%.o : %.c	
	$(CC)gcc  -c $(INCS) $(CFLAGS)  -o $@ $<
Learn-in-depth.elf:$(OBJ) $(ASOBJ)
	$(CC)ld -T linker_script.ld -o $@ $(OBJ) $(ASOBJ) -Map=Map_file.map
Learn-in-depth.list:Learn-in-depth.elf	
	$(CC)objdump -D $< > $@	
Learn-in-depth.bin:Learn-in-depth.elf	
	$(CC)objcopy -O binary $< $@
clean:
	rm -f *.o *.elf *.bin *.list *.map	