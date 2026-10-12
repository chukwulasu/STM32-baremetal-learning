CC = arm-none-eabi-gcc 
CCFLAGS = -mthumb -mcpu=cortex-m3 -std=gnu11 -I "./" -c 
LDFLAGS = -mthumb -mcpu=cortex-m3 -T stm32_ls.ld

final: chapter_5.hex

main.o : main.c
	${CC} ${CCFLAGS} $^ -o $@

stm32f103c8tx_startup.o : stm32f103c8tx_startup.c
	${CC} ${CCFLAGS} $^ -o $@

chapter_5.elf : main.o stm32f103c8tx_startup.o
	${CC} ${LDFLAGS} main.o stm32f103c8tx_startup.o -o chapter_5.elf -nostdlib -Wl,-Map=chapter_5.map

chapter_5.hex : chapter_5.elf
	arm-none-eabi-objcopy -O ihex chapter_5.elf chapter_5.hex

clean :
	rm -f *.o *.elf 



