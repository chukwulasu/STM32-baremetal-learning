ENTRY(Reset_Handler)

MEMORY{
    FLASH(rx): ORIGIN = 0x08000000, LENGTH = 128K
    SRAM(rwx): ORIGIN = 0x20000000, LENGTH = 20K
}

_estack = ORIGIN(SRAM) +  LENGTH(SRAM);

SECTIONS{
    .text :
   { 
    . = ALIGN(4);
    KEEP(*(.isr_vector_tbl*))
    *(.text*)
    *(.rodata*)
    _etext = . ;
   } > FLASH

   .data : 
   {
    . = ALIGN(4);
    _sdata = . ;
    *(.data*)
    _edata = . ;
     . = ALIGN(4);
   } > SRAM AT > FLASH

   .bss : 
   {
    . = ALIGN(4);
    _sbss = . ;
    . = ALIGN(4);
    _ebss = . ;
   } > SRAM

    
}