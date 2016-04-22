#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int function(const char *aptr,const char *bptr);

int main(int argc, char *argv[]) {
	
	char string1[]="gokhan";
	char string2[]="uzer";
	
function(string1,string2);
	
	
	return 0;
}

int function(const char *aptr,const char *bptr){
	
	for(;*aptr!='\0' && *bptr!='\0';aptr++,bptr++){
		
		if(*aptr!=*bptr){
			return 0;
		}
	}
	
return 1;	
}
