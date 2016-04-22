#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int asal_mi(int sayi);



int main(int argc, char *argv[]) {
	
	int x;
	printf("sayi giriniz:");
	scanf("%d",&x);
	
	printf("%d",asal_mi(x));
	

	
	
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
			printf("sayi asaldýr. ");
		}
		else
			printf("sayi asal degildir.");
		
		return 0;
	}
