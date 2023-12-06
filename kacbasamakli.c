#include <stdio.h>
int main () {
    int sayi;
    int ikibasamakli;
    int tekbasamakli;
    do {
        printf("pozitif sayi gir ya da programdan çıkmak için negatif tamsayi gir");
        scanf("%d",&sayi);
        if(sayi>=10 && sayi<=99){
            ikibasamakli++;
        }
        else if(sayi<=9 && sayi>=0){
            tekbasamakli++;
        }
    } while (sayi>=0);
    printf("girilen %d tane sayidan %d tanesi iki basamaklı %d tanesi tek basamaklıdır",sayi,ikibasamakli,tekbasamakli);

}
