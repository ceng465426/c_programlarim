#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void kacinciindis( char *aptr,char *bptr);

int main(int argc, char *argv[]) {
	
	char string1[]="gokhan";
	char string2[]="a";

	
	kacinciindis(string1,string2);
	
	return 0;
}

void kacinciindis( char *aptr,char *bptr){
	int i;
	
	for(i=0;*aptr!='\0';aptr++,i++)	{
		if(*aptr==*bptr){
			printf("%d",i);
			}
	}
	
}
