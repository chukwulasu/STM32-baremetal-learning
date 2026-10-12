#include <stdint.h>

#define GPIOC_BASE_ADDRESS (uint32_t)(0x40011000)
#define GPIO_CRH_OFFSET (uint32_t)(0x04)
#define GPIOC_CRH *((volatile uint32_t*)(GPIOC_BASE_ADDRESS + GPIO_CRH_OFFSET))
#define GPIO_ODR_OFFSET (uint32_t)(0x0C)
#define GPIOC_ODR *((volatile uint32_t*)(GPIOC_BASE_ADDRESS + GPIO_ODR_OFFSET))
#define RCC_BASE_ADDRESS (uint32_t)(0x40021000)
#define RCC_APB2ENR_OFFSET (uint32_t)(0x18)
#define RCC_APB2ENR *((volatile uint32_t*)(RCC_BASE_ADDRESS + RCC_APB2ENR_OFFSET))


void specific(void){
    RCC_APB2ENR |= (uint32_t)(0x01 << 4);
    GPIOC_CRH &= ~((uint32_t)(0x0F << 20));
    GPIOC_CRH |= ((uint32_t)(0x03 << 20));
    for(;;){
        GPIOC_ODR ^= (uint32_t)(0x01 << 13);
        for (int i = 0; i < 1000000; i++); // delay loop
    }

}