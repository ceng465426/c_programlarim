#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int asal_mi(int sayi);

int main() {
	
	int x;
	
	for(x=1;x<=1000;x++){
        if(x==1){
            continue;
        }
        
        asal_mi(x);
    }
	
	getch();
	return 0;
}

	int asal_mi(int sayi){
		
		int i, kontrol=0;
		
		for(i=2;i<sayi;i++){
			
			if(sayi%i==0){
				
				kontrol=1;
				break;
				
			}
			
		}
		
		if(kontrol==0){
			printf("%5d\t ",sayi);
		}
		
		
		return sayi;
	}
