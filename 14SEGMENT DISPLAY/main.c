/*
 * 14SEGMENT DISPLAY.c
 *
 * Created: 10/14/2017 12:46:02 PM
 * Author : dell laptop
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRA = 0x0F;
	DDRD = 0xFF;
	DDRF = 0xFF;
    while (1) 
    {
		PORTA = 0xFE;// ROW ONE
		if((PINA & (1<<PA4))==0){
			PORTD = 0x1F;
			PORTF = 0xFF;
		}
		else  if((PINA &(1<<PA5))==0){
			PORTD = 0x00;
			PORTF = 0x77;
		}
		else if((PINA & (1<<PA6))==0){
			PORTD = 0x1B;
			PORTE = 0x77;
		}
		PORTA = 0xFD;//ROW TWO
		if((PINA & (1<<PA4))==0){
			PORTD = 0x9B;
			PORTF = 0x77;
		}
		else  if((PINA &(1<<PA5))==0){
			PORTD = 0x4B;
			PORTF = 0x77;
		}
		else if((PINA & (1<<PA6))==0){
			PORTD = 0x40;
			PORTE = 0x77;
		}
		else if((PINA & (1<<PA7))==0){
			PORTD = 0xFF;
			PORTF = 0xAA;
		}
		PORTA = 0xFB;//ROW THREE
		if((PINA & (1<<PA4))==0){
			PORTD = 0x9F;
			PORTF = 0xFF;
		}
		else  if((PINA &(1<<PA5))==0){
			PORTD = 0x27;
			PORTF = 0x77;
		}
		else if((PINA & (1<<PA6))==0){
			PORTD = 0x0F;
			PORTE = 0x77;
		}
		else if((PINA & (1<<PA7))==0){
			PORTD = 0xFF;
			PORTF = 0x77;
		}
		PORTA = 0xF7;
		if((PINA &(1<<PA5))==0){
			PORTD = 0x00;
			PORTF = 0xFF;
		}
		else if((PINA & (1<<PA7))==0){
			PORTD = 0xFF;
			PORTF = 0x55;
		}
    }
}

