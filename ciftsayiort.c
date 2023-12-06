 #include <stdio.h>
 int main () {
    int sayi;
    int toplam;
    int adet;
    int i;
    printf("5 pozitif tamsayı giriniz:");
    for(i=0; i<5; i++) {
        printf(" sayi %d" , i+1);
        scanf("%d", &sayi);
        if(sayi>0 && sayi %2==0){
           toplam= toplam+ sayi;
           adet++;
        }    
 
   }
   
 }
