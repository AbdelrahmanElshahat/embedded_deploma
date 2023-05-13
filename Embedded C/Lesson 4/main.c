#include"PLATFORM_TYPES.h"
#define SYSCTL_RCGCGPIO_R       (*((volatile uint32_t *)0x400FE108))
#define GPIO_PORTF_DIR_R        (*((volatile uint32_t *)0x40025400))
#define GPIO_PORTF_DEN_R        (*((volatile uint32_t *)0x4002551C))
#define GPIO_PORTF_DATA_R       (*((volatile uint32_t *)0x400253FC))
int main(void){
    volatile uint32_t delay;
    SYSCTL_RCGCGPIO_R |= 0x20;
    for(delay=0; delay<200; delay++);
    GPIO_PORTF_DIR_R |=1<<3;
    GPIO_PORTF_DEN_R |=1<<3;
    while(1){
        GPIO_PORTF_DATA_R |=1<<3;
        for(delay=0; delay<200000; delay++);
        GPIO_PORTF_DATA_R &=~(1<<3);
        for(delay=0; delay<200000; delay++);
    }

    return 0;
}