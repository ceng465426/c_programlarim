#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/// * sabit veriyi gösteren sabit olmayan bir gösterici kullanarak stringin karakterlerini yazdýrmak*///



void karakterleriYazdir(const char *aptr);


int main(int argc, char *argv[]) {
	
	char string[]="gokhan uzer";
	
	printf ("string\n");
	
	karakterleriYazdir(string);
	
	return 0;
}


void karakterleriYazdir(const char *aptr){
	
	for(;*aptr!='\0';aptr++){
		
		printf("%c",*aptr);
	}
	
}
