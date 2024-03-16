#ifndef UART_H
#define UART_H
#include <stdint.h>
void init_uart(uint16_t); 
//void uart_putchar_polling(void); 
int uart_read(char *buf, int len);
int uart_write(char *buf, int len);

#endif