/*
 * led4_axi_lite_slave.c
 *
 *  Created on: 2013/12/16
 *      Author: Masaaki
 */

#include <stdio.h>
#include "xil_types.h"
#include "xparameters.h"
#include "xil_io.h"
#include "xil_exception.h"
#include "xscugic.h"

#define LED4_AXILS_BASEADDR XPAR_LED4_AXI_LITE_SLAVE_0_S_AXI_RNG00_BASEADDR

extern char inbyte(void);

int main() {
	int inbyte_in;
	int val;

	while(1){
		print("********************** LED4 TEST Start ***********************\n\r");
		print("TeraTerm: Please Set Local Echo Mode.\n\r");
		print("Press '1' to show all registers\n\r");
		print("Press '2' to set LED4 Enable or Disable(Toggle, Command Register)\n\r");
		print("Press '3' to set LED Counter Load Register (4bits, Please input hexadecimal)\n\r");
		print("Press '4' to set LED Interval Register (32bits, Please input decimal)\n\r");
		print("Press '5' to exit\n\r");
		print("Selection : ");
		inbyte_in = inbyte();
		print(" \r\n");
		print(" \r\n");

		switch(inbyte_in) {
			case '1' : // Show all registers
				val = (int)Xil_In32((u32)LED4_AXILS_BASEADDR);
				printf("Command Register is %x\r\n", val);
				val = (int)Xil_In32((u32)(LED4_AXILS_BASEADDR+4));
				printf("LED Counter Load Register is %x\r\n", val);
				val = (int)Xil_In32((u32)(LED4_AXILS_BASEADDR+8));
				printf("LED Monitor Register is %x\r\n", val);
				val = (int)Xil_In32((u32)(LED4_AXILS_BASEADDR+0xc));
				printf("LED Interval Register is %d (decimal)\r\n", val);
				break;
			case '2' : // Set LED4 Enable or Disable(Toggle, Command Register)
				val = (int)Xil_In32((u32)LED4_AXILS_BASEADDR);
				if (val & 1) {
					Xil_Out32((u32)LED4_AXILS_BASEADDR, (u32)0);
					print("LED4 count is Disable\n\r");
				} else {
					Xil_Out32((u32)LED4_AXILS_BASEADDR, (u32)1);
					print("LED4 count is Enable\n\r");
				}
				break;
			case '3' : // Set LED Counter Load Register (4bits, Please input hexadecimal)
				print("Please input LED Counter Load Register value (hexadecimal)");
				scanf("%x", &val);
				Xil_Out32((u32)(LED4_AXILS_BASEADDR+4), (u32)val);
				print(" \r\n");
				break;
			case '4' : // Set LED Interval Register (32bits, Please input hexadecimal)
				print("Please input LED Interval Load Register value (decimal) ");
				scanf("%d", &val);
				Xil_Out32((u32)(LED4_AXILS_BASEADDR+0xc), (u32)val);
				print(" \r\n");
				break;
			case '5' : // exit
				print("exit\r\n");
				return 0;
		}
		print(" \r\n");
	}

}

