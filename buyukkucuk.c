#include <stdio.h>
int main() {
    int sayi;
    int min; 
    int max;
    printf("sayi gir (sonlandırmak için negatif)");
    scanf("%d", &sayi);
    max=sayi;
    min=sayi;
    while( sayi>0){
        if(sayi>max){
            max = sayi;
        }
        if(sayi<0){
            min=sayi;
        }
        printf("sayi (sonlandırmak için negatif)");
        scanf("%d", &sayi);
    }
    printf("\n");
    printf("GİRİLENLERİN EN KÜÇÜĞÜ= %d \n",max);
    printf("GİRİLENLERİN EN KÜÇÜĞÜ= %d \n ",min);
    return 0;
}