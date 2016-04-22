#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void function( char *aptr, const char *bptr);

int main(int argc, char *argv[]) {
	
	int i;
	char string1[]="gokhan ";
	char string2[]="uzer";
	
	function(string1,string2);
	
	for(i=0;string1[i]!='\0';i++){
	printf("%c",string1[i]);
}
	
	
	return 0;
}

 void function( char *aptr, const char *bptr){
	int i;
	
	
	
	for(;*aptr!='\0';aptr++);
	for(;*bptr!='\0';bptr++,aptr++){
			*aptr=*bptr;
	}
}

		

