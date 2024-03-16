//Since we want to use a C file, we have to tell the same to the Arduino.
//read about it here: https://stackoverflow.com/a/28876157
extern "C" {
  #include "uart.h" 
}
#include <avr/io.h>
char myBuff[] = {"Hello"}; 
uint8_t len = sizeof(myBuff)/sizeof(myBuff[0]); 
void setup() {
  // put your setup code here, to run once:
  init_uart(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  uart_write(myBuff, len); 
}
