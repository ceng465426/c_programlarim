#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int *aptr;
	
	a=5;
	aptr=&a;
	
	
	
	printf("a'nin adresi  %p" "\n aptr degiskeninin degeri %p",&a,aptr);
	
	
	printf("\n\n a'nin degeri %d"  "\n *aptr'nin degeri %d ",a,*aptr);
	
	
	
	printf("\n\n * ve & birbirinin eslenigidýr"
	"\n &*aptr= %p" "\n*&aptr=%p ", &*aptr, *&aptr);
	
	
	
	return 0;
}
