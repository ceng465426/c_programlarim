#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int toplam=1, hane=1;
  int sayi, ilkbas, sonbas;
  
  
  printf("sayi giriniz:");
  scanf("%d",&sayi);
  
   
 
        while(sayi>10){
                              
        sayi=sayi/10;
        hane++;
          
}



         while(hane!=1){ 
               
               toplam=toplam*10;
               hane--;
               
               }            

  
  
  while(sayi>=10)
  {
             
       ilkbas=sayi/toplam;
       sonbas=sayi%10;
      
       
       if(ilkbas==sonbas){
             sayi=(sayi-(sonbas+ilkbas*toplam))/10;     
             }
        else
        printf("sayi polidrom deðildir");              
                
    }
   
  

 	
  return 0;
}

