#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int sayi,kalan, basamak=0;
    
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    
    
    while(sayi>10)
    {
        kalan=sayi%10;
        sayi=sayi-kalan;
        sayi=sayi/10;
           
           if(kalan==5)
           {
                basamak++;       
                       
                       
                       }
                  
                  
                  
                  }
                  
                  
        if(sayi==5)
    {
        basamak++;       
               }
                  
        if(basamak==0)
        {
           printf("sayida 5 degeri yoktur.\n");
                      }
        else
            printf("Sayida %d tane 5 degeri vardir.\n",basamak);
  
  system("PAUSE");	
  return 0;
}
