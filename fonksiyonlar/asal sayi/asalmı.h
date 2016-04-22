#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int asal_mi(int sayi);
	
	int asal_mi(int sayi){
		
		int sayi,i;
		
		for(i=2;i<sayi;i++){
			
			if(sayi%i==0){
				
				break;
				
			}
			
		}
		
		printf("%d",sayi);
	}
	
	
	return 0;
}

