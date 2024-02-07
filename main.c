#include <stdio.h>
#include <stdlib.h>
#include"decToAll.h"
#include"binToAll.h"
#include"octToAll.h"



int main(int argc, char *argv[]) {
	
	int choice,bin,dec,oct;
	char hex[32];
	printf("Enter '1' - Binary to All\n ");
	printf("Enter '2' - Decimal to All\n ");
	printf("Enter '3' - Octal to All\n ");
	printf("Enter '4' - HexaDecimal to All\n ");
	printf("Enter Choice: ");
	scanf("%d",&choice);
	printf("\n\n");
	
	switch(choice){
		case 1:
		
			printf("Enter Binary : ");
			scanf("%d",&bin);
		
			printf("Decimal: %d\n",binToDec(bin));
			printf("Octal: %d\n",binToN(bin,8));
			printf("HexaDecimal: %s\n",binToHex(bin));
			break;
		case 2:
			printf("Enter Decimal: ");
			scanf("%d",&dec);
			printf("Binary: %d\n",decToN(dec,2));
			printf("Octal: %d\n",decToN(dec,8));
			printf("HexaDecimal: %s\n",decToHex(dec));
			break;
		case 3:
			printf("Enter Octal: ");
			scanf("%d",&oct);
			printf("Decimal: %d\n",octToDec(oct));
			printf("Binary: %d\n",octToN(oct,2));
			printf("HexaDecimal: %s\n",octToHex(oct));
			break;
		case 4: 
				printf("Enter Hexadecimal: ");
				fflush(stdin);
				gets(hex);
				hexToAll(hex);
				break;
			
	}
	
		
	
	
	return 0;
}
