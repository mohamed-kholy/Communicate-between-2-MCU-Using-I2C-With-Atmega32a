
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "MCAL/I2C_interface.h"

int main(void)
{
	/* Initialize I2c Master */
    MI2C_voidMasterInit();
	/* Send Start Condition */
	MI2C_enuSendStartCondition();
	/* Send Slave Address With Write Operation */
	MI2C_enuSendSlaveAddWithWrite(0b0000001);
	/* Send 'A' Character */
	MI2C_enuMasterSendDataByte(7);
	/* Send Stop Condition */
	MI2C_voidSendStopCondition();
    while (1) 
    {
			
    }
}

