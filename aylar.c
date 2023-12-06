#include <stdio.h>
int main() {
    int ay;
    printf("AY DEĞERİNİ GİRİNİZ (1-12): \n");
    scanf("%d", &ay);
    switch (ay) {
        case 1:
        printf("OCAK");
    break;
        case 2:
        printf("ŞUBAT");
    break;
        case 3:
        printf("MART");
    break;
        case 4:
        printf("NİSAN");
    break;
        case 5:

    break;
        case 6:
        printf("HAZİRAN");
    break;
        case 7:
        printf("TEMMUZ");
    break;
        case 8:
        printf("AĞUSTOS");
    break;
        case 9:
        printf("EYLÜL");
    break;
        case 10:
        printf("EKİM");
    break;
        case 11:
        printf("KASIM");
    break;
        case 12:
        printf("ARALIK");
    break;
        default:
            printf("YANLIŞ AY DEĞERİ GİRDİNİZ");   
    }

    return 0;

}