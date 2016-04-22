#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void siralama(int *myArray, int n);

int main(int argc, char *argv[]) {
	
	int i, dizi[5]={1, 8, 4, 37, 9};
	
	
	puts("ONCE:");
	
	for(i=0;i<5;i++){
		printf("%d\t",dizi[i]);
		
	}
	
	siralama(dizi,5);
	
	puts("\nSONRA:");
	
	for(i=0;i<5;i++){
		printf("%d\t",dizi[i]);
		
	}

	return 0;
}

void siralama(int *myArray, int n){
	
	int i,k, gecici;
	
	for(k=0; k<n-1; k++)
	for(i=0;i<n-1;i++){
		if(myArray[i]>myArray[i+1]){
			
			gecici=myArray[i+1];
			myArray[i+1]=myArray[i];
			myArray[i]=gecici;
			
			
		}
	}
	
	
}
