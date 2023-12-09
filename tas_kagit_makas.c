#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("TAŞ KAĞIT MAKAS OYUNU \n\n\n");

srand(time(NULL));
int i=0;
int tahmin;
int bilgisayarTahmini= (rand()%3) +1;
int kullanici=0;
int bilgisayar=0;

/*OYUN 5 KERE OYNANACAK*/

while (i<5)
{
    printf("LÜTFEN TAHMİNİNİZİ GİRİNİZ: (taş=1, kağıt=2, makas=3) \n");
    scanf("%d", &tahmin);

     if (tahmin==1){

     }
     else if (tahmin==2)
     {
        
     }
     else if (tahmin==3)
     {

     }
    else
    {
        printf("YANLIŞ TAHMİNDE BULUNDUNUZ \n\n");
    }

    if (tahmin==1)
    {
        if (bilgisayarTahmini==1)
        {
            printf("BERABERE KALDINIZ \n\n");
        }
        else if (bilgisayarTahmini==2)
        {
            bilgisayar++;
            printf("KAYBETTİNİZ \n\n");
            
        }
        else if (bilgisayarTahmini==3)
        {
            kullanici++;
            printf("TEBRİKLER KAZANDINIZ \n\n");
            
        }
    }
    else if (tahmin==2)
    {
        if (bilgisayarTahmini==2)
        {
            printf("BERABERE KALDINIZ \n\n");
        }
        else if (bilgisayarTahmini==3)
        {
            bilgisayar++;
            printf("KAYBETTİNİZ \n\n");
            
        }
        else if (bilgisayarTahmini==1)
        {
            kullanici++;
            printf("TEBRİKLER KAZANDINIZ \n\n");
            
        }
    }
    else if (tahmin==3)
    {
        if (bilgisayarTahmini==3)
        {
            printf("BERABERE KALDINIZ \n\n");
        }
        else if (bilgisayarTahmini==1)
        {
            bilgisayar++;
            printf("KAYBETTİNİZ \n\n");
            
        }
        else if (bilgisayarTahmini==2)
        {
            kullanici++;
            printf("TEBRİKLER KAZANDINIZ \n\n");
            
        }
    }
   
         
    
    i++;
}
   printf("kullanıcı - bilisayar: %d - %d \n\n", kullanici,bilgisayar);

    return 0;
}




