/*
 * I2c Driver.c
 *
 * Created: 10/1/2021 7:30:47 PM
 * Author : Mohamed El-Kholy
 */ 
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "MCAL/DIO/MDIO_interface.h"
#include "MCAL/I2C/I2C_interface.h"

int main(void)
{
	/* Local Variable Holds The Received Data */
	u8 Local_u8ReturnData ;
	/* Initialize the Slave With The Target Address */
    MI2C_voidSlaveInit(0b0000001);
	/* Receive The Data From The Master */
	Local_u8ReturnData= MI2C_enuSlaveReadDataByte();
	/* Make PortB  as Output */
	MDIO_voidSetPortDirection(GPIOB , HIGH);
	/* Show The Received Value On PortB */
	MDIO_voidSetPortValue(GPIOB,Local_u8ReturnData);
    while (1) 
    {
		
    }
}
