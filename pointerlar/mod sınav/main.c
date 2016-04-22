#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void myMode(const int *param1,const int param2,int *param3);

int main(int argc, char *argv[]) {
	
	int myArray[] = {2,4,4,4,5,5,7,5,5,9};
	int result;
	
	myMode(myArray,10,&result);
	
		printf("MOD : %d\n",result);
		
	return 0;
}
void myMode(const int *param1,const int param2,int *param3){
	
	int i,j;
	int tmod,gmod;
	
	for(i=0;i<param2;i++){
		
		gmod=0;
		for(j=i+1;j<param2;j++){
			
			if(param1[i]==param1[j]){
			gmod++;	
			
			}	
			if(gmod>tmod){
			
			tmod=gmod;
			*param3=param1[i];
		}	
		}
		
	}
	
	
}
