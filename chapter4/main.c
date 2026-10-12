#include <stdint.h>
#include "MYSTMLIBRARY.h"

#define DELAY (uint32_t)(2 * 500000)

int main(void)
{
  RCC_APB2ENR |= (1U << 2); // Enable clock for GPIOA
  GPIOA_CRL &= ~(BIT0 | BIT1 | BIT2 | BIT3); // Clear bits for PA0
  GPIOA_CRL |= BIT1; // Set PA0 as output
  
	for(;;){
    GPIOA_ODR |= BIT0; // Set PA0 high
    for(volatile uint32_t i = 0; i < DELAY; i++){} // delay
    GPIOA_ODR &= ~BIT0; // Set PA0 low
    for(volatile uint32_t i = 0; i < DELAY; i++){} // delay
  };
  return 0;
}
