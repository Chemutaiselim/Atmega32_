/*
 * LED.c
 *
 * Created: 10/06/2021 10:21:13
 * Author : Default
 */ 
#define LED1 0b00000001
#define LED2 0b00000010


#define BTN1 (PINA&LED1)

#define F_CPU 8000000UL 
#include <avr/io.h> // including header file for input and output definitions
#include <util/delay.h>



int main(void)
{
    
	DDRB=0b11111111;
	
 while(1)
 
 {
 PORTB =0x06;
			_delay_ms(100);	
				
	   }


		
    
}

