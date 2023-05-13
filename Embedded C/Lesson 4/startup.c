#include"PLATFORM_TYPES.h"
void Reset_Handler(void);
extern int main(void);
void Default_Handler(void){
    Reset_Handler();
}
void NMI_Handler(void) __attribute__((weak,alias("Default_Handler")));
void H_Fault_Handler(void) __attribute__((weak,alias("Default_Handler")));
static uint32_t Stack_top[256]; //reserve 1KB of memory for stack

void (* const g_p_fn_Vectors[])() __attribute__((section(".vectors"))) = {
    (void (*)()) ((uint32_t)Stack_top + sizeof(Stack_top)),
    &Reset_Handler,
    &NMI_Handler,
    &H_Fault_Handler
};
extern uint32_t _E_text;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;
void Reset_Handler(void){
    uint32_t size = (uint32_t*)&_E_data - (uint32_t*)&_S_data;
    uint8_t *p_src = (uint8_t*)&_E_text;
    uint8_t *p_dst = (uint8_t*)&_S_data;
    for(uint32_t i = 0; i < size; i++){
        *((uint8_t *) p_dst++) = *((uint8_t *) p_src++);
    }
    uint16_t bss_size = (uint32_t*)&_E_bss - (uint32_t*)&_S_bss;
    p_dst = (uint8_t*)&_S_bss;
    for(uint32_t i = 0; i < bss_size; i++){
        *((uint8_t *) p_dst++) = (uint8_t) 0;
    }
    main();
}


