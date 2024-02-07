#include"binToAll.h"

int binToDec(int bin){
	
	int rem, i=0, res=0;
	while(bin!=0)
		{
			rem = bin%10;
			bin/=10;
			res +=rem * pow(2,i);
			i++;
		}
		return res;
}

int binToN(int bin, int base){
	int dec = binToDec(bin);
	return decToN(dec,base); 
}

char* binToHex(int bin){
	int dec =binToDec(bin);
	return decToHex(dec);
}
