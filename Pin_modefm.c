
#include <Pin_settingfm.h>
#include "MKL25Z4.h"
#include <stdio.h>

extern int pinMode(char portx, int Pinx, int GPIOx) //Declaraciones para Pin mode

{

	int mux_0 = 0x100; //Se prende el mux

	SIM->SCGC5 = 0x3E00; // SCGC5 A,B,C,D,E total hexadecimal

	 if(portx == 'A') //asignacion para portx

	 {
	PORTA->PCR[Pinx] = mux_0;



	if(GPIOx == 1)
	 {

	GPIOA->PDDR|= 1<<Pinx;

	 }

	else if(GPIOx == 0)

	{
	 GPIOA->PDDR &= ~(1<<Pinx);
	}

	 } else  if(portx == 'B') //asignacion
	 {



	PORTB->PCR[Pinx] = mux_0;

	if(GPIOx == 1)

	 {
	GPIOB->PDDR|=1<<Pinx;

	}else if(GPIOx == 0)
	 {
	GPIOB->PDDR &=~(1<<Pinx);
	 }

	 } else  if(portx == 'C') //asignacion
	 {
	PORTC->PCR[Pinx] = mux_0;

	if(GPIOx == 1)

	{
     GPIOC->PDDR |= 1<<Pinx;

	 }

	else if(GPIOx == 0)
	 {
		 GPIOC->PDDR &= ~(1<<Pinx);
	 }

	 }

	 else  if(portx == 'D') //asignacion

	 {
		 PORTD->PCR[Pinx] = mux_0;
		 if(GPIOx == 1)

		 {
			 GPIOD->PDDR |= 1<<Pinx;

		 }else if(GPIOx == 0)
		 	 {
			 	 GPIOD->PDDR &= ~(1<<Pinx);
		 	 }

	 } else  if(portx == 'E') //asignacion
	 {


		 PORTE->PCR[Pinx] = mux_0;
		 if(GPIOx == 1)
		 {

			 GPIOE->PDDR |= 1<<Pinx;

		 }else if(GPIOx == 0)
		 	 {
			 	 GPIOE->PDDR &= ~(1<<Pinx);
		 	 }

	 }


}
