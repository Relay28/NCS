#include"decToAll.h"

int decToN(int dec, int base){
	int res=0, rem, pr=1;
	while(dec!=0){
		rem = dec%base;
		dec/=base;
		res += rem*pr;
		pr*=10;
	}
	return res;
}
char* decToHex(int dec) {
    char* hex = (char*)malloc(100 * sizeof(char)); 
    int index = 0;

    while (dec != 0) {
        int rem = 0;
        rem = dec % 16;
        if (rem < 10)
            hex[index++] = rem + 48; 
        else
            hex[index++] = rem + 55; 
        dec /= 16;
    }
    if (index == 0) {
        hex[index++] = '0'; 
    }
    hex[index] = '\0'; 
	int  j;
	int i;
    // Reverse the string
    for ( i = 0,j=index-1;i < j; i++) {
        char temp = hex[i];
        hex[i] = hex[j];
        hex[j] = temp;
        j--;
    }
    return hex;
}
void hexToAll(char hex[]){
	  int cnt=0,dec=0,i,digit; 
    

    for (i = (strlen(hex) - 1); i >= 0; i--) { 
        if (hex[i] >= 'A' && hex[i] <= 'F') 
            digit = hex[i] - 'A' + 10;
        else 
           		 digit = hex[i] - '0';
        

        dec += (digit) * pow(16, cnt);
        cnt++;
    } 
 printf("Decimal: %d\n",dec);
  printf("Binary: %d\n",decToN(dec,2)); 	
 printf("Octal: %d",decToN(dec,8));
   	
}
