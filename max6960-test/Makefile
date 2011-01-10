#Programming options
AVRDUDE =     avrdude
APROGRAMMER = avr109
APART =       m32u4
APORT =       /dev/ttyACM0
AFLAGS =      -p $(APART) -c $(APROGRAMMER) -e -P $(APORT)
ABURN =       -U flash:w:

#Compilation options
CC =     avr-gcc
CPART =  atmega32u4
CFLAGS = -Wall -mmcu=$(CPART) -o $@

#Object stripping options
OC =      avr-objcopy
OFORMAT = ihex
OMEMORY = .eeprom
OFLAGS =  -O $(OFORMAT) -R $(OMEMORY)



test.hex: test.c
	$(CC) $(CFLAGS) $<
	$(OC) $(OFLAGS) $@

burn: test.hex
	$(AVRDUDE) $(AFLAGS) $(ABURN)$<
