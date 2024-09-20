/*
 * GccApplication1.c
 *
 * Created: 9/14/2024 5:26:02 PM
 * Author : Mikahail Thomas 816033563
 */ 


#include "sam.h"

int main(void)
{
	int i;
	
	SystemInit();  // Initialize system (clocks, etc.)
	
	// Set PA20 (Port A, Pin 20) as output for the LED on pin 6
	REG_PORT_DIR0 |= 1 << 20;  // Group 0 refers to PORT A, bit 20 is PA20
	
	while (1)
	{
		REG_PORT_OUT0 |= 1 << 20;  // Set PA20 high, turn on the LED
		for (i = 0; i < 100000; i++) {}  // Delay loop

		REG_PORT_OUT0 &= ~(1 << 20);  // Set PA20 low, turn off the LED
		for (i = 0; i < 100000; i++) {}  // Delay loop
	}
}
