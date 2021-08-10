/*
 * digitalWrite.c
 *
 *  Created on: 19 nov. 2020
 *
 */

#include <Pin_settingfm.h>
#include "MKL25Z4.h"
#include <stdio.h>

extern int digitalWrite(char porty, int Piny, int GPIOy) //declaracion para digitalwrite

{
		if(porty=='A')
		{


			if(GPIOy==1)
			{

			GPIOA->PDOR|= 1<<Piny;
			}

			else if(GPIOy==0)
			{
		    GPIOA->PDOR&=~(1<<Piny);
			}

		    }

		else if (porty=='B')
		    {
		    	if(GPIOy==1){


		    	 GPIOB->PDOR|=1<<Piny;
		    	}

		else if (GPIOy==0)
		    	{
		    		GPIOB->PDOR&=~(1<<Piny);
		    	}

		    }

		else if(porty=='C')
		    {
		    	if(GPIOy==1){


		    	GPIOC->PDOR|=1<<Piny;

		    	}

		 else if(GPIOy==0)


		    	{
		    		GPIOC->PDOR&=~(1<<Piny);
		    	}
		    }

		else if (porty=='D')
		    {
		    	if(GPIOy==1)


		    	{
		    		GPIOD->PDOR|= 1<<Piny;
		    	}

		else if(GPIOy==0)
		    	{
		    		GPIOD->PDOR&=~(1<<Piny);
		    	}
		    }

		else if(porty=='E')
		    {
		    	if(GPIOy==1)


		    	{
		    		GPIOE->PDOR|= 1<<Piny;
		    	}

	    else if(GPIOy==0)


		    	{

		   GPIOE->PDOR&= ~(1<<Piny);
}
}
}



