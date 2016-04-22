#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void ters(const char *const sptr);

int main(int argc, char *argv[]) {
	
	char cumle[80];
	
	printf("metin girisi yapiniz.\n");
	gets(cumle);
	
	printf("girdiginiz metnin tersi:\n");
	ters(cumle);
	
	return 0;
}

void ters(const char *const sptr){
	
	if(sptr[0]=='\0')
	return;
	
	else 
	{
		ters(&sptr[1]);
		putchar(sptr[0]);
	}
}
