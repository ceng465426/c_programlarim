#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=10;
	int m=10;
	int dizi1[n];
	int dizi2[m];
	int i,j,x,y=0;
	int kontrol;
		
	for(i=0;i<n;i++){
		
		scanf("%d",&dizi1[i]);
		x=dizi1[i];
		kontrol=0;                
		for(j=0;j<i+1;j++){
			
			if(x==dizi1[j]){
				kontrol++;				
			}				
		}
			if(kontrol==1){
				dizi2[y]=x;				
				printf("%d\n",dizi2[y]);
				y++;		                                        
			}
			else{
				printf("*\n");
			}
	
	}
		
	return 0;
}
