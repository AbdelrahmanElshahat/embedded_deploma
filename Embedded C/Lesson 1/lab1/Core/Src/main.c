typedef volatile unsigned int vuint32_t;
#include "main.h"
#include <stdint.h>
//Registers Addresses
#define RCC_BASE 0x40021000
#define GPIO_PORTA_BASE 0x40010800
#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18)
#define GPIOA_CRH *(volatile uint32_t *)(GPIO_PORTA_BASE + 0x04)
#define GPIOA_ODR *(volatile uint32_t *)(GPIO_PORTA_BASE + 0x04)
//bit fields
#define RCC_IOPAEN (1<<2)
#define GPIOA13 (1UL<<13)

typedef union {
	vuint32_t all_fields;
	struct{
		vuint32_t reserved : 13;
		vuint32_t pin_13:1;
	}PINS;
}R_ODR_t;
volatile R_ODR_t * R_ODR = (volatile R_ODR_t *)(GPIO_PORTA_BASE + 0x0c);
int main(void)
{
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;

  while (1)
  {
    R_ODR->PINS.pin_13 = 1;
    for(int i = 0 ; i<5000;i++);
    R_ODR->PINS.pin_13 = 0;
    for(int i = 0 ; i<5000;i++);
  }
  return 0;
}

