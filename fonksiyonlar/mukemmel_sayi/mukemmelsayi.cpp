#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mukemmel_sayi(int sayi);

int main(int argc, char *argv[]) {
	
	int x ;
	
	for(x=1;x<=500;x++){
		
		mukemmel_sayi(x);
		
		if(mukemmel_sayi(x)==1){
			printf("%d\t",x);
		}
	    
	}
	
	return 0;
}



int mukemmel_sayi(int sayi){
	
	int i;
	float toplam=1.0;
	for(i=2;i<=sayi;i++){
			
		if(sayi%i==0){
				
			toplam+=1/float(i);							
		}		
	}
		
	if(toplam==2){
		return 1;
	}	
	else return 0;
		
}
