#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void siralama(int dizi[], int boyut);

int main(int argc, char *argv[]) {
	
	
		
	int myArray[]={20,61,17,41,86,61,61,42,64,6,55};
	
	siralama(myArray,9);
	
	return 0;
}

void siralama(int dizi[], int boyut){
	
	int i,j,tut;
	
	for(i=1;i<boyut;i++){
		for(j=0;j<boyut;j++){
			if(dizi[j]>dizi[j+1]){
			tut=dizi[j];
			dizi[j]=dizi[j+1];
			dizi[j+1]=tut;
			
			
		}
	}
	
	}

	for(j=0;j<boyut;j++){
		printf("%d\t",dizi[j]);	
}

}

