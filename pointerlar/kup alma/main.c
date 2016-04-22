#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int degeregorekup(int n  );


int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	sayi=degeregorekup(sayi);
	
	printf("sayinin kubu: %d",sayi);
	
	
	return 0;
}

int degeregorekup(int n ){
	
	return n*n*n;
}
