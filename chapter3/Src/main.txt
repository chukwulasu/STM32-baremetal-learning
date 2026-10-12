#include <stdint.h>
#include "MYSTMLIBRARY.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
  RCC_APB2ENR |= (1U << 2); // Enable clock for GPIOA
  GPIOA_CRL &= ~(BIT0 | BIT1 | BIT2 | BIT3); // Clear bits for PA0
  GPIOA_CRL |= BIT1; // Set PA0 as output
  GPIOA_ODR |= BIT0; // Set PA0 high

	for(;;);
  return 0;
}
