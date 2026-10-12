#include <stdint.h>
#include "MYSTMLIBRARY.h"

#define DELAY (uint32_t)(2 * 500000)

int main(void)
{
    RCC_APB2ENR |= (uint32_t)(0x01 << 4);
    GPIOC_CRH &= ~((uint32_t)(0x0F << 20));
    GPIOC_CRH |= ((uint32_t)(0x03 << 20));
    for(;;){
        GPIOC_ODR ^= (uint32_t)(0x01 << 13);
        for (int i = 0; i < 1000000; i++); // delay loop
    }

  }