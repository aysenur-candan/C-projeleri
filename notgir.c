#include <stdio.h>
int main() {
    long toplam=0;
    int ogrencisayisi=0;
    int notu;
    float ortalama;

    printf("NOTU GİRİNİZ: (-1 GİRİLENE KADAR DEVAM EDER)");
    scanf("%d", &notu);
    while( notu =! -1){
        toplam=toplam+ notu;
        ogrencisayisi=ogrencisayisi+1;
        printf("NOTU GİRİNİZ: (-1 GİRİLENE KADAR DEVAM EDER)");
        scanf("%d", &notu);
}
if (ogrencisayisi =! 0){
    ortalama= (float)toplam/ ogrencisayisi;
    printf("\n\nOrtalama: %5.2f \n",ortalama);
}
else {
        printf("Hiç not girilmedi.\n");
    }
return 0;
} 