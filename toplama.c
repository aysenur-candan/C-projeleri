#include <stdio.h>
int main () {
    int sayac=1;
    int toplam=0;
    while(sayac<8900){
        toplam=toplam+ sayac;
        sayac++;
    }
printf("TOPLAM= %d ", toplam);
return 0;
}