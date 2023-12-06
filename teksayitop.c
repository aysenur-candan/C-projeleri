#include <stdio.h>
int main() {
    int baslangic;
    int bitis;
    int sayi;
    int toplam=0;
    int teksayaci=0;
    printf("baslangic ve bitis degerlerini giriniz:");
    scanf("%d%d", &baslangic, &bitis);
    printf("baslangic ile bitis arasindaki tek sayilar: \n");
    for (sayi = baslangic+1; sayi< bitis; sayi++)
    { 
        if (sayi%2==1){
        printf("%d \n", sayi);
        teksayaci++;
        toplam=toplam+ sayi;

    }
           
    }
    if(baslangic > bitis){
        printf("yanlıs baslangic bitis girdiniz");
    }
    else {
        printf("%d \n" , teksayaci);
        printf("girdiğiniz aralıkta %d tane tek sayi vardir", teksayaci);
    }
   
    printf("bu sayiların toplamı %d dir", toplam);
    return 0;
    
    
}