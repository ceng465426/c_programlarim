#include <stdio.h>
#include <stdlib.h>
#define BOYUT 99
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void orta(const dizi[]);
void medyan(int dizi[]);
void kabarciksiralama(int dizi[]);
void diziyiyazdir(const dizi[]);
void mod(int [], const int []);


int main(int argc, char *argv[]) {
	
	int frekans[10]={0};
	int cevap[BOYUT]={6,7,8,9,8,7,8,9,8,9,
					  7,8,9,5,9,8,7,8,7,8,
					  6,7,8,9,3,9,8,7,8,7,
					  7,8,9,8,9,8,9,7,8,9,
					  6,7,8,7,8,7,9,8,9,2,
					  7,8,9,8,9,8,9,7,5,3,
					  5,6,7,2,5,3,9,4,6,4,
					  7,8,9,6,8,7,8,9,7,8,
					  4,5,6,1,6,5,7,8,7,8,
					  2,5,6,8,9,5,6,4,8};
	
	orta(cevap);
	medyan(cevap);
	mod(frekans,cevap);
	
	return 0;
}
void orta(const int dizi[]){
	
	
	printf("//******ORTALAMA******//\n\n\n");
	
	int i;
	int toplam=0;
	
	for(i=0;i<BOYUT;i++){
		toplam+=dizi[i];
	}
	
	printf("Ortalama veri nesnelerinin ortalama degeridir.\n"
			"Ortalama butun veri nesnelerinin toplamaýnýn\n"
			"veri nesnelerinin sayisina (%d) bolumudur.\n"
			"Bu veriler icin ortalama :\n\n"
			"%d/%d=%.4f\n\n",BOYUT,toplam,BOYUT,(float)toplam/BOYUT);
}


void medyan(int cevap[]){
	
	printf("//******MEDYAN******//\n\n\n");
	
	printf("Siralanmamýs dizi\n");
	diziyiyazdir(cevap);
	printf("\nsiralanmýs dizi\n");
	kabarciksiralama(cevap);
	printf("\n Siralanmýs %d elamanlýk dizide \n"
			"medyan %d. elemandýr.\n"
			"Bu calismada medayan %d",BOYUT,BOYUT/2,cevap[BOYUT/2]);
	
	
	
	
}

void kabarciksiralama(int dizi[]){
	
	
	int i,tut,tur;
	for(tur=1;tur<BOYUT;tur++){
		for(i=0;i<BOYUT-1;i++){
		if(dizi[i]>dizi[i+1]){
			tut=dizi[i];
			dizi[i]=dizi[i+1];
			dizi[i+1]=tut;
			
		}
	}
	}
	
	
	for(i=0;i<BOYUT;i++){
		printf("%d\t",dizi[i]);
	}
}

void diziyiyazdir(const int dizi[]){
	
	
	int i;
	
	for(i=0;i<BOYUT;i++){
		printf("%d\t",dizi[i]);
	}
}

void mod(int frek[], const int cevap[]){
	
	int puan, j, h, enBuyuk=0, modDegeri=0;
	
	printf("\n\n//******MOD******//\n\n");
	
	for(puan=1;puan<=9;puan++){
		
		frek[puan]=0;
	}
	
	for(j=0;j<BOYUT;j++){
		++frek[cevap[j]];
	}
	
	printf("%s%11s%19s\n\n%54s\n%54s\n\n",
	"cevap", "Frekans", "Histogram",
	"1 1 2 2 ", "5 0 5 0 5");
	
	for(puan=1;puan<=9;puan++){
		printf("%8d%11d",puan,frek[puan]);
		
		if(frek[puan>enBuyuk]){
			enBuyuk=frek[puan];
			modDegeri=puan;
		}
		for(h=1;h<=frek[puan];h++){
			printf("*");
			
		}
		printf("\n");
	}
	
	printf("Mod en sýk rastlanan degerdir\n"
			"Bu calismada mod %d dir"
			"%d kez rastlanmýstýr.\n",modDegeri,enBuyuk);
}

