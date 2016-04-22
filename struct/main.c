#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct kart{
	char *taraf;
	char *takim;
	
};


int main(int argc, char *argv[]) {
	
	struct kart a;
	struct kart *aptr;
	
	a.taraf="AS";
	a.takim="MACA";
	
	aptr=&a;
	
	printf("%s %s\n",a.takim,a.taraf);
	printf("%s %s\n",aptr->takim,aptr->taraf);
	printf("%s %s\n",(*aptr).takim,(*aptr).taraf);
	
	
	
	return 0;
}
