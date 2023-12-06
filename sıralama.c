#include <stdio.h>
int main() {
    float sayi1, sayi2, sayi3;
    printf("3 sayi giriniz: ");
    scanf("%f%f%f", &sayi1, &sayi2, &sayi3);
    printf("Girilen sayilarin sirali hali: ");

    if (sayi1 > sayi2 && sayi1 > sayi3) {
        if (sayi2 > sayi3) {
            printf("%f, %f, %f\n", sayi3, sayi2, sayi1);
        } else {
            printf("%f, %f, %f\n", sayi2, sayi3, sayi1);
        }
    } else if (sayi2 > sayi1 && sayi2 > sayi3) {
        if (sayi1 > sayi3) {
            printf("%f, %f, %f\n", sayi3, sayi1, sayi2);
        } else {
            printf("%f, %f, %f\n", sayi1, sayi3, sayi2);
        }
    } else {
        if (sayi1 > sayi2) {
            printf("%f, %f, %f\n", sayi2, sayi1, sayi3);
        } else {
            printf("%f, %f, %f\n", sayi1, sayi2, sayi3);
        }
    }

    return 0;
}


