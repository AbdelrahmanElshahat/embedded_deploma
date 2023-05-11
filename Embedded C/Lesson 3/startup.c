#include"PLATFORM_TYPES.h"
//#define stack_start_sp 0x20001000
extern int main(void);
void Reset_Handler(void);
void Defualt_Handler(void){
    Reset_Handler();
}
 
void NMI_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void H_Fault_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void MemManage_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void Bus_Fualt_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void Usage_Fualt_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;

uint32_t extern _stack_top;

uint32_t vectors [] __attribute__((section(".vectors"))) = {
    (uint32_t) &_stack_top,
    (uint32_t) &Reset_Handler,
    (uint32_t) &NMI_Handler,
    (uint32_t) &H_Fault_Handler,
    (uint32_t) &MemManage_Handler,
    (uint32_t) &Bus_Fualt_Handler,
    (uint32_t) &Usage_Fualt_Handler
};
uint16_t extern _E_text ;
uint16_t extern _S_data ;
uint16_t extern _E_data ;
uint16_t extern _S_bss ;
uint16_t extern _E_bss ;

void Reset_Handler(void){
    //copy data from flash to ram
    uint16_t DATA_SIZE = (uint8_t*)&_E_data - (uint8_t*)&_S_data;
    uint8_t *P_src = (uint8_t*)&_E_text;
    uint8_t *P_dst = (uint8_t*)&_S_data;
    for (uint16_t i = 0; i < DATA_SIZE; i++)
    {
        *((uint8_t*)P_dst++) = *((uint8_t*)P_src++);
    }
    //init bss to zero
    uint16_t BSS_SIZE = (uint8_t*)&_E_bss - (uint8_t*)&_S_bss;
    P_dst = (uint8_t*)&_S_bss;
    for (uint16_t i = 0; i < BSS_SIZE; i++)
    {
        *((uint8_t*)P_dst++) = (uint8_t)0;
    }
    //jump to main
    main();
}
