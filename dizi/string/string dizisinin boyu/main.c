#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int say(char x[]);

int main(int argc, char *argv[]) {
	
	char string[1000];
	
	printf("string giriniz.:");	
	scanf("%s",string);
	
	say(string);
	
	
	printf("dizi boyutu : %d",say(string));
	
	return 0;
}

int say(char x[]){
	
	int i;
	int kontrol=0;
	
	for (i=0;x[i]!='\0';i++){
		kontrol++;
	}
	
	return kontrol;	
}

