#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void enBuyukfark(int dizi[], int boyut);

int main(int argc, char *argv[]) {
	
	int myArray[]={5, 50, 25, 8, 90, 90, 45, 100};
	
	enBuyukfark(myArray, 8);
	
	return 0;
}

void enBuyukfark(int dizi[], int boyut){
	
	int i,j,a,b,buyukfark;
	int fark=0;
	
	buyukfark=fark;
	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			fark=dizi[i]-dizi[j];
			
			if(buyukfark<fark){
				a=dizi[i];
				b=dizi[j];
				buyukfark=fark;
			}
		}
	}
	
	printf("%d - %d = %d",a,b, buyukfark);
}
