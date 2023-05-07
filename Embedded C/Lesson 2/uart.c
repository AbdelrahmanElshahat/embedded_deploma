#include"uart.h"
void Uart_Send_string (unsigned char *P_tx_string)
{
while(*P_tx_string != '\0')
{ /* Loop until end of string */
UART0DR = (unsigned int)(*P_tx_string); /* Transmit char */
P_tx_string++; /* Next char */
}
}