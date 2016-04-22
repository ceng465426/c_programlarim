#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int terscevir(char const dizi1[], char dizi2[]);

int main(int argc, char *argv[]) {
	
	char myArray1[]="gokhan";
	char myArray2[40];
	
	
	terscevir(myArray1 , myArray2);
	
	
	return 0;
	
}

int terscevir(char const dizi1[], char dizi2[]){
	
	
	char i;
	int j, k;
	int kontrol=0;
	
	for(i=0;dizi1[i]==NULL;i++){
		
		
	}
	
	for(j=0;j<=i;j++){
		for(k=i;k>0;k--){
			if(j==k){
				dizi2[k]=dizi1[j];
				kontrol++;
				
			}
		}
	}
	
	
	
	if(kontrol!=0){
		printf("DÝZÝ TERS CEVÝRÝLMÝSTÝR.\n = %s",dizi2);
	}
	else{
		printf("DÝZÝ TERS CEVÝRÝLEMEMÝSTÝR.");
	}
	

	
}
