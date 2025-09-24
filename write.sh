avrdude -P usb -c usbasp -p ATmega8 -B 5 -U lfuse:w:0xff:m -U hfuse:w:0xcf:m -U flash:w:firmware.hex
