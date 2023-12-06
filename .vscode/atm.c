#include <stdio.h> 
int main () {
    int bakiye=100;
    int cekilentutar;
    int yatirilantutar;
    int secim;

    while (1) {

        printf("1: Bakiye sorgulama \n");
        printf("2: Para çekme \n");
        printf("3: Para yatırma \n");
        printf("0: Kart iadesi \n");
        printf("Lütfen yapmak istediğiniz işlemi seçiniz \n");
        scanf("%d", &secim);   

        switch (secim)
        {
        case 1:
            printf("Bakiyeniz: %d \n\n", bakiye );
            break;
        case 2:
            printf("Çekemek istediğiniz tutarı giriniz \n\n");
            scanf("%d", &cekilentutar);
            bakiye=bakiye-cekilentutar;
            if (cekilentutar> bakiye)
            {
                printf("Yeterli bakiye bulunmamaktadır \n\n");
            }
            printf("Kalan bakiye: %d \n\n", bakiye);
            break;
        case 3:
            printf("Yatırılacak tutarı giriniz \n\n");
            scanf("%d", &yatirilantutar);
            bakiye=bakiye+yatirilantutar;
            printf("Toplam bakiye %d \n\n",bakiye);
            break;
        case 0:
            printf("Kart iadesi yapılıyor \n\n");
            break;
        default:
            printf("Yanlış işlem tuşladınız! \n\n");
            break;
        }
        
        }
         return 0;

    }
   