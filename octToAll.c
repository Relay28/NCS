#include"octToAll.h"


int octToDec(int oct){
	int res=0, i =0,rem;
	
	while(oct!=0){
		rem = oct%10;
		oct/=10;
		res += rem*pow(8,i);
		i++;
	}
	return res;
	
}

int octToN(int oct,int base){
	int dec = octToDec(oct);
	return decToN(dec,base);
	
}
char* octToHex(int oct){
	int dec =octToDec(oct);
	return decToHex(dec);
}
