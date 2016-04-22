#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int referansagorekubalma(int *nptr);

int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	sayi=referansagorekubalma(&sayi);
	
	printf("sayinin kubu: %d",sayi);
	
	
	return 0;
}
int referansagorekubalma(int *nptr){
	
	return *nptr=*nptr**nptr**nptr;
	
}
