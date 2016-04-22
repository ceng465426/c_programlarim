#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void myStringSearch(const char *param1,const char param2,int *param3);

int main(int argc, char *argv[]) {
	
	char myString[] = "aabb";
	char charToFind = 'b';
	
	int result;
	
	myStringSearch(myString,charToFind,&result);
	
	if (result != -1){
		printf("KARAKTER BULUNDU : %d\n",result);
	}
	else {
		printf("KARAKTER BULUNAMADI\n");
	}

}

void myStringSearch(const char *param1,const char param2,int *param3){
	
	int i;
	char *x=param1;

	for(i=0;*x!='\0';x++,i++){
		
		if(*x==param2){
			*param3=i;
			return;
			
		}			
	}
	*param3=-1;
}
