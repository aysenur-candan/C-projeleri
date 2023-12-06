#include <stdio.h>
int main () {
    char tip;
    int gun;
    int km;
    int tutar;
    printf("araba türleri: \n");
    printf("a \n");
    printf("b \n");
    printf("s \n");
    printf("------------------------- \n");
    printf("araba türünü seçiniz: \n");
    scanf("%c", &tip);
    printf("arabayı kaç gün kullandınız? \n");
    scanf("%d", &gun);
    printf("arabayla kaç km yol yaptınız? \n");
    scanf("%d", &km);
    printf("------------------------- \n");
    switch (tip)
    {
    case 'a':
        tutar= (20*gun)+(km*18);
        printf("ödenecek tutar= %d\n", tutar);
        break;
    case 'b':
        tutar=(32*gun)+(km*22);
        printf("ödenecek tutar= %d\n", tutar);
        break;
    case 's':
        tutar=(51*gun)+(km*36);
        printf("ödenecek tutar= %d\n", tutar);
        break;      
    
    default:
        printf("yanlış tür girdiniz!");
    }
    
    return 0;
}