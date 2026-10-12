#include <stdint.h>

extern uint32_t _estack;
extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

extern void Reset_Handler                  (void);
extern void Default_Handler                (void);
extern void NMI_Handler                    (void) __attribute__((weak, alias("Default_Handler")));
extern void HardFault_Handler              (void) __attribute__((weak, alias("Default_Handler")));
extern void MemMangagement_Handler         (void) __attribute__((weak, alias("Default_Handler")));
extern void BusFault_Handler               (void) __attribute__((weak, alias("Default_Handler")));
extern void UsageFault_Handler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void SVCall_Handler                 (void) __attribute__ ((weak, alias("Default_Handler")));
extern void PendSV_Handler                 (void) __attribute__ ((weak, alias("Default_Handler")));
extern void Systick_Handler                (void) __attribute__ ((weak, alias("Default_Handler")));
extern void WWDG_IRQHandler                (void) __attribute__ ((weak, alias("Default_Handler")));
extern void PVD_IRQHandler                 (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TAMPER_IRQHandler              (void) __attribute__ ((weak, alias("Default_Handler")));
extern void RTC_IRQHandler                 (void) __attribute__ ((weak, alias("Default_Handler")));
extern void FLASH_IRQHandler               (void) __attribute__ ((weak, alias("Default_Handler")));
extern void RCC_IRQHandler                 (void) __attribute__ ((weak, alias("Default_Handler")));
extern void EXTI0_IRQHandler               (void) __attribute__ ((weak, alias("Default_Handler")));
extern void EXTI1_IRQHandler               (void) __attribute__ ((weak, alias("Default_Handler")));
extern void EXTI2_IRQHandler               (void) __attribute__ ((weak, alias("Default_Handler")));
extern void EXTI3_IRQHandler               (void) __attribute__ ((weak, alias("Default_Handler")));
extern void EXTI4_IRQHandler               (void) __attribute__ ((weak, alias("Default_Handler")));
extern void DMA1_Channel1_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void DMA1_Channel2_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void DMA1_Channel3_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void DMA1_Channel4_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void DMA1_Channel5_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void DMA1_Channel6_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void DMA1_Channel7_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void ADC1_2_IRQHandler              (void) __attribute__ ((weak, alias("Default_Handler")));
extern void USB_HP_CAN_TX_IRQHandler       (void) __attribute__ ((weak, alias("Default_Handler")));
extern void USB_LP_CAN_RX0_IRQHandler      (void) __attribute__ ((weak, alias("Default_Handler")));
extern void CAN_RX1_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void CAN_SCE_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void EXTI9_5_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TIM1_BPK_IRQHandler            (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TIM1_UP_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TIM1_TRG_COM_IRQHandler        (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TIM1_CC_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TIM2_IRQHandler                (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TIM3_IRQHandler                (void) __attribute__ ((weak, alias("Default_Handler")));
extern void TIM4_IRQHandler                (void) __attribute__ ((weak, alias("Default_Handler")));
extern void I2C1_EV_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void I2C1_ER_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void I2C2_EV_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void I2C2_ER_IRQHandler             (void) __attribute__ ((weak, alias("Default_Handler")));
extern void SPI1_IRQHandler                (void) __attribute__ ((weak, alias("Default_Handler")));
extern void SPI2_IRQHandler                (void) __attribute__ ((weak, alias("Default_Handler")));
extern void USART1_IRQHandler              (void) __attribute__ ((weak, alias("Default_Handler")));
extern void USART2_IRQHandler              (void) __attribute__ ((weak, alias("Default_Handler")));
extern void USART3_IRQHandler              (void) __attribute__ ((weak, alias("Default_Handler")));
extern void EXTI15_10_IRQHandler           (void) __attribute__ ((weak, alias("Default_Handler")));
extern void RTCAlarm_IRQHandler            (void) __attribute__ ((weak, alias("Default_Handler")));
extern void USBWakeup_IRQHandler           (void) __attribute__ ((weak, alias("Default_Handler")));
void specific                              (void);

uint32_t vector_tbl[] __attribute__((section(".isr_vector_tbl*"))) = {
    (uint32_t) &_estack,
    (uint32_t) &Reset_Handler,
    (uint32_t) &NMI_Handler,
    (uint32_t) &HardFault_Handler,
    (uint32_t) &MemMangagement_Handler,
    (uint32_t) &BusFault_Handler,
    (uint32_t) &UsageFault_Handler,
    0,
    0,
    0,
    0,
    (uint32_t) &SVCall_Handler,
    0,
    0,
    (uint32_t) &PendSV_Handler,
    (uint32_t) &Systick_Handler,
    (uint32_t) & WWDG_IRQHandler,
    (uint32_t) &PVD_IRQHandler,
    (uint32_t) &TAMPER_IRQHandler,
    (uint32_t) &RTC_IRQHandler,
    (uint32_t) &FLASH_IRQHandler,
    (uint32_t) &RCC_IRQHandler,
    (uint32_t) &EXTI0_IRQHandler,
    (uint32_t) &EXTI1_IRQHandler,
    (uint32_t) &EXTI2_IRQHandler,
    (uint32_t) &EXTI3_IRQHandler,
    (uint32_t) &EXTI4_IRQHandler,
    (uint32_t) &DMA1_Channel1_IRQHandler,
    (uint32_t) &DMA1_Channel2_IRQHandler,
    (uint32_t) &DMA1_Channel3_IRQHandler,
    (uint32_t) &DMA1_Channel4_IRQHandler,
    (uint32_t) &DMA1_Channel5_IRQHandler,
    (uint32_t) &DMA1_Channel6_IRQHandler,
    (uint32_t) &DMA1_Channel7_IRQHandler,
    (uint32_t) &ADC1_2_IRQHandler,
    (uint32_t) &USB_HP_CAN_TX_IRQHandler,
    (uint32_t) &USB_LP_CAN_RX0_IRQHandler,
    (uint32_t) &CAN_RX1_IRQHandler,
    (uint32_t) &CAN_SCE_IRQHandler,
    (uint32_t) &EXTI9_5_IRQHandler,
    (uint32_t) &TIM1_BPK_IRQHandler,
    (uint32_t) &TIM1_UP_IRQHandler,
    (uint32_t) &TIM1_TRG_COM_IRQHandler,
    (uint32_t) &TIM1_CC_IRQHandler,
    (uint32_t) &TIM2_IRQHandler,
    (uint32_t) &TIM3_IRQHandler,
    (uint32_t) &TIM4_IRQHandler,
    (uint32_t) &I2C1_EV_IRQHandler,
    (uint32_t) &I2C1_ER_IRQHandler,
    (uint32_t) &I2C2_EV_IRQHandler,
    (uint32_t) &I2C2_ER_IRQHandler,
    (uint32_t) &SPI1_IRQHandler,
    (uint32_t) &SPI2_IRQHandler,
    (uint32_t) &USART1_IRQHandler,
    (uint32_t) &USART2_IRQHandler,
    (uint32_t) &USART3_IRQHandler,
    (uint32_t) &EXTI15_10_IRQHandler,
    (uint32_t) &RTCAlarm_IRQHandler,
    (uint32_t) &USBWakeup_IRQHandler
};

void Default_Handler(void){
    while(1){

    }
}

void Reset_Handler(void){
    // initialization of .data on the SRAM
    uint32_t *data_src_start = (uint32_t*) &_etext;
    uint32_t *data_dest_start = (uint32_t*) &_sdata;
    uint32_t data_size = ((uint32_t) &_edata - (uint32_t) &_sdata) / 4;
    for(uint32_t i = 0; i < data_size; i++){
        *(data_dest_start++) = *(data_src_start++);
    }

    //initialization of .bss on the SRAM
    uint32_t *bss_dest_start = (uint32_t*) &_sbss;
    uint32_t bss_size = ((uint32_t) &_ebss - (uint32_t) &_sbss) / 4;
    for (uint32_t i = 0; i < bss_size; i++){
        *(bss_dest_start++) = 0;
    }

    specific();
    while(1){} // MISRA recommended in the case of a return from main and prevent reading wrong memory
}