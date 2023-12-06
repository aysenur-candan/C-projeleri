#include <stdio.h>
int main () {
    int sayi;
    int baslangic;
    int bitis;
    int ciftsayaci=0;
 
    printf("baslangıc ve bitis degerlerini giriniz: \n");
    scanf("%d %d", &baslangic, &bitis);
    printf("%d ",baslangic);
    printf("%d ",bitis);
    printf("baslangic ve bitis degerleri arasindaki sayilar \n");
    for(sayi=baslangic+1; sayi<bitis; sayi++){
        if(sayi %2==0){
            printf("%d \n",sayi); 
            ciftsayaci ++;
        } 
    }
    if(baslangic > bitis){
        printf("yanlıs aralık girdiniz");
    }
    else {
        printf("\n", ciftsayaci);
    }
    printf("toplam %d adet çift sayi bulundu" ,ciftsayaci);
    return 0;
}