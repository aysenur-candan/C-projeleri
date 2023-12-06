#include <math.h>
#include <stdio.h>

int main() {
    int yukseklik;
    int cap;
    float alan;
    float hacim;
    float yaricap;

    printf("YÜKSEKLİK GİRİN: \n" );
    scanf("%d", &yukseklik);
  
    printf("ÇAP GİRİN: \n");
    scanf("%d", &cap);

    yaricap = cap/2;
    alan = (M_PI * yaricap * yaricap);
    hacim = (alan * yukseklik)/3;
    
    printf("ALAN = %f \n" , alan);
    printf("HACİM = %f \n", hacim);
    return 0;
}