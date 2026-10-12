/*specifying the firmware's entry point*/
ENTRY(Reset_Handler)

MEMORY{
    FLASH(rx): ORIGIN = 0x08000000, LENGTH = 128K
    SRAM(rwx): ORIGIN = 0x20000000, LENGTH = 20K
}
_estack = ORIGIN(SRAM) + LENGTH(SRAM);

/*specifying the necessary heap and stack sizes*/

_max_heap_size = 0x200;
_max_stack_size = 0x400;

/* Defining output sections*/

SECTIONS
{    
    .text :
    {
    . = ALIGN(4);
    KEEP(*(.isr_vector_tbl))
    *(.text*)
    *(.rodata)
    . = ALIGN(4);
    _etext = . ;
    }>FLASH

    .data :
    {
        . = ALIGN(4);
        _sdata = . ;
        *(.data*)
        _edata = . ;
    }>SRAM AT >FLASH

    .bss :
    {
        . = ALIGN(4);
        _sbss = . ;
        *(.bss*)
        . = ALIGN(4);
        _ebss = . ;
    }>SRAM

}

