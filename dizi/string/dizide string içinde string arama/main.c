#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int aynistring(char dizi1[],char dizi2[]);


int main(int argc, char *argv[]) {
	
	char string1[100];
	char string2[100];
	
	printf("1.string:");
	scanf("%s",string1);
	
	printf("2.string:");
	scanf("%s",string2);
	
	aynistring(string1,string2);
	
	if(aynistring(string1,string2)==1){
		printf("1.stringin icinde 2. string vardir.");
	}
	else {
		printf("1.stringin icinde 2. string yoktur.");
	}
	
	
	return 0;
}


int aynistring(char dizi1[],char dizi2[]){
	int boyut1, boyut2, m;
	char temp[100];
	int i,j, k=0;
	int kontrol=0;
	
	for(boyut1=0;dizi1[boyut1]!='\0';boyut1++);
	for(boyut2=0;dizi2[boyut2]!='\0';boyut2++);

		
	if(boyut2>boyut1){
	    
	   	for(m=0,boyut2=0;dizi2[boyut2]!='\0';boyut2++,m++){
				temp[m]=dizi2[boyut2];
							
		}
		for(boyut2=0,boyut1=0;dizi1[boyut1]!='\0';boyut1++,boyut2++){
			dizi2[boyut2]=dizi1[boyut1];				
		}
		
		for(boyut1=0,m=0;temp[m]='\0';m++,boyut1++){
			dizi1[boyut1]=temp[m];
		}
	
	}
	
	
	
	
	for(j=1;dizi2[j]!='\0';j++);
	
		
	for(i=0;dizi1[i]!='\0';i++){
		
		if(dizi1[i]==dizi2[k]){
			
			kontrol++;
			k++;
			if(kontrol==j){
			
				return 1;
				
			}
		}
	}	
	
}
