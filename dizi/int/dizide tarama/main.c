#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void findGreatervalues(int param[], int size, int value);

int main() {
	
	int myArray[] = {100, 90, 0, 40, 60};
	
	findGreatervalues(myArray, 5, 59);
	
	return 0;
}

void findGreatervalues(int param[], int size, int value){
	
	int i;
	int j=0;
	
	for(i=0;i<size;i++){
		if(param[i]>value){
			j++;
		}
	}
	
	printf("%d ADET DEGER %d 'DAN BUYUKTUR.",j,value);
}
