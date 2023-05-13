CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
TARGET = lab4_cortexM4
SOC =-M versatilepb
MEMORY_SIZE =-m 128M
GUI =-nographic
EMU =qemu-system-arm

all: $(TARGET).hex
flash:$(TARGET).bin
	@echo "Running" $(EMU)
	@echo "Press Ctrl-A and then X to exit QEMU"
	$(EMU) $(SOC) $(MEMORY_SIZE) $(GUI) -kernel $<
	 
%.o : %.s
	$(CC)as  $(CFLAGS) $(INCS) -o $@ $<
%.o : %.c	
	$(CC)gcc  -c $(INCS) $(CFLAGS)  -o $@ $<
$(TARGET).elf:$(OBJ) $(ASOBJ)
	$(CC)ld -T linker_script.ld -o $@ $(OBJ) $(ASOBJ)  -Map=Map_file.map
	cp $(TARGET).elf $(TARGET).elf.axf
$(TARGET).list:$(TARGET).elf	
	$(CC)objdump -D $<  $@	
$(TARGET).hex:$(TARGET).elf	
	$(CC)objcopy -O binary $< $@
clean:
	rm -f *.o *.elf *.bin *.list *.map	*.hex *.elf *.asm *.axf