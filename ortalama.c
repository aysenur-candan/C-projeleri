#include <stdio.h>
#include <math.h>
int main() {
    int vize;
    int final;
    int devam;
    int ort;

    printf("vize notu: \n");
    scanf("%d", &vize);
    
    printf("final notu:\n");
    scanf("%d", &final);

    printf("devam notu:\n");
    scanf("%d", &devam);

    ort = (vize*0.4) + (final*0.5) + (devam*0.1);

    printf("Ortalama: %d\n", ort);

    if ( ort>= 60)

        printf("GEÇTİNİZ");

    else 
        printf("GALDINIZ ZIRLAYIN");

    return 0;


}