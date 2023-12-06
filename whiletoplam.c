#include<stdio.h> 
int main ()
{
    int sayac = 1;
    int toplam = 0;

    while( sayac <= 100){
        toplam = toplam + sayac;
        sayac ++ ;
    }
    printf("Toplam = %d\n" , toplam);
    return 0;
}



