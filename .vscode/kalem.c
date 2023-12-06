#include <stdio.h>
int main() {
    int kirmizi=0;
    int lacivert =0;
    int beyaz =0;
    int mavi=0;
    int sari=0;
    int adet;
    float ucret=0;
    int kod;
     while (1){
        printf("kod gir iptal için 111: (kirmizi=11, lacivert=12, beyaz=13, mavi=14, sari=15) \n");
        scanf("%d",&kod);
        if (kod==111)
        {
            break;
        }
        switch (kod)
        {
        case 11:
            kirmizi++;
            ucret+= 1.5;
            break;
        case 12:
            lacivert++;
            ucret+=2.5;
            break;
        case 13:
            beyaz++;
            ucret+=3;
        break;
        case 14:
            mavi++;
            ucret+=4.5;
            break;
        case 15:
            sari++;
            ucret+=5;
            break;    
        default:
            printf("gecersiz kod \n");
            break;
        }
     }
    
     printf("toplam %f kazanc \n", ucret);
     return 0;
}