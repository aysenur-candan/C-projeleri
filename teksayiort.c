#include<stdio.h>
int main() {
    int sayi;
    int adet=0;
    int toplam=0;
    int i;
    printf("10 adet pozitif tamsayı giriniz:\n");
    for (i = 0; i < 10; i++)
    {
        printf("sayi %d:", i+1);
        scanf("%d", &sayi);
        if (sayi>0 && sayi %2 ==1){
            toplam = toplam + sayi;
            adet ++;
        }
    }
    if(adet>0){
        double ortalama = (double)toplam/adet;
        printf("girilen tek sayıların ortalaması: %.2lf\n", ortalama);
    }    
    else {
        printf("girilen sayılar arasında tek sayi bulunamadi \n");

    }
    return 0;
    
     

}

       
