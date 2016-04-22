#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void fibbo(int dizi[]);


int main(int argc, char *argv[]) {
	
	int sayi;
	int dizim[n];
	
	printf("kaça kadar?");
	scanf("%d",&sayi);
	
	n=sayi;
	
	fibbo(dizim[]);
	
	
	
	return 0;
}

int fibbo(int dizi[]){
	
	
	int i;
	dizi[0]=0;
	dizi[1]=1;
	
	for(i=3;i<x;i++){
		
		dizi[i]=dizi[i-1]+dizi[i-2];
		
		
		
	}
	
	for(i=0;i<x;i++){
		
		printf("%d",dizi[i]);
	}
return 0 ;	
}
