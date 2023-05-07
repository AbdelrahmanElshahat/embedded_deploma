#define UART0DR *((volatile unsigned int* const)((unsigned int *)0x101f1000))
#ifndef _UART_H_
#define _UART_H_
//UART APIs
void Uart_Send_string (unsigned char *P_tx_string);
#endif