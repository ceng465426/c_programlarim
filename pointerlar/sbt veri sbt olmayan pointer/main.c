#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/// * sabit veriyi g�steren sabit olmayan bir g�sterici kullanarak stringin karakterlerini yazd�rmak*///



void karaterleriYazdir(const char *aptr);


int main(int argc, char *argv[]) {
	
	char string[]="gokhan uzer";
	
	printf ("string");
	
	karakterleriYazdir(string);
	
	return 0;
}


void karaterleriYazdir(const char *aptr){
	
	for(;*aptr!='\0';aptr++){
		
		printf("�c",*aptr);
	}
	
}
