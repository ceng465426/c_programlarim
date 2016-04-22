#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void rastgele(double *myArray, int n);

int main(int argc, char *argv[]) {
	
	int i;
	double dizi[5];
	
	
	srand(1234567);
	
	rastgele(dizi,5);
	
	puts("rastgele dizi elemanlarý");
	
	for(i=0;i<4;i++){
		
		puts("%lf\n",dizi[i]);
		
	}
  	
	return 0;
}


void rastgele(double *myArray, int n){
	
	int i;
	
	for(i=0;i<n;i++){
		
		*(myArray+i)=(double)rand()/RAND_MAX;
	}	
	
}
