#include <stdio.h> 
int main () {
    int adet;
    int sayi;
    int sayacpozitif=0;
    int sayacnegatif=0;
    int i;                                                                                              
    printf("kaç tane sayı gireceksiniz? \n");
    scanf("%d", &adet);
    if (adet<0){
        printf("geçersiz adet değeri \n");
    }
    for ( i = 0; i < adet; i++)
    {
        printf("sayi %d \n", i+1);
        scanf("%d", &sayi);
        if (sayi<0){
            sayacnegatif++;
        }
        else if (sayi>0) {
            sayacpozitif++;
        }

        }
        printf("girdiğiniz %d adet sayıdan %d tanesi pozitif, %d tanesi negatiftir \n",adet,sayacpozitif,sayacnegatif);
       return 0;
   
    }

    
