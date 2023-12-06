#include <stdio.h>
#include <math.h>
int main () 
{
    float km_basi_tuketim;
    float bir_litre_yakit_fiyati;
    int yol;
    int toplam_maaliyet;

    printf("KM BAŞINA YAKIT TÜKETİMİNİ GİRİNİZ: \n");
    scanf("%f", &km_basi_tuketim);

    printf("1 L YAKIT FİYATINI GİRİNİZ: \n");
    scanf("%f", &bir_litre_yakit_fiyati);

    printf("ALINAN YOLU GİRİNİZ: \n");
    scanf("%d", &yol);

    toplam_maaliyet= (km_basi_tuketim*bir_litre_yakit_fiyati*yol);
    printf("TOPLAM MAALİYET= %d \n", toplam_maaliyet);
    return 0;

}