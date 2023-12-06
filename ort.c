#include <stdio.h>
int main()
 
{
    int notlar[5];
    int i;
    double ortalama;
    double toplam = 0;
   
    printf("5 tane not girin: \n");
    for ( i = 0; i < 5 ; i++)
    {
        scanf("%d", &notlar[i]);
        toplam = toplam + notlar[i];
    }
    ortalama = toplam / 5;
    printf("sınıf ortalaması = %.2f\n", ortalama );
    printf("ortalamadan büyük notlar\n");
    for (i=0; i< 5 ; i++)
    {
        if(notlar[i] > ortalama)
            printf("%d \n", notlar[i]);
    } 
    return 0 ;
}    