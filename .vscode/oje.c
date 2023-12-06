#include <stdio.h>
int main(){
    int kirmizi=0;
    int yesil=0;
    int sari=0;
    int siyah=0;
    int kod;
    while (1)
    {
        printf("kod gir: (kirmizi=1, yesil=2, sari=3, siyah=4) \n");
        scanf("%d",&kod);
        if (kod==111)
        { 
            break ;
        }
        switch (kod)
        {
        case 1:
            kirmizi++;
            break;
        case 2:
            yesil++;
             break;
        case 3:
            sari++;
             break;
        case 4:
            siyah++; 
            break;
        default:
            printf("gecersiz kod \n");
             break;
        }

    }
    printf("satılan oje sayilari: \n");
    printf("kirmizi %d tane \n", kirmizi);
    printf("yesil %d tane \n", yesil);
    printf("sari %d tane \n", sari);
    printf("siyah %d tane \n", siyah);
    return 0;
}


