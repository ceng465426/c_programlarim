#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void deneme( char *aptr);

int main(int argc, char *argv[]) {
	
	char string[]="gokhan";
	
	deneme(string);
	
	
	return 0;
}


void deneme( char *aptr){
	
	char *xptr=aptr;
	
	for(;*xptr!='\0';xptr++){
		
		prinf("%c",*xptr);
	}
}
