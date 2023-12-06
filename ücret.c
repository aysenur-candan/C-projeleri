#include <stdio.h>
int main () {
    int bireysayisi ;
    float tutar=0 ;
  
    
    printf("ailede kaç birey var?");
    scanf("%d",&bireysayisi);
   
    if(bireysayisi<=0){
        printf("geçerli bi sayi giriniz \n");
        return 1;
    }
   
    int yaslar[bireysayisi];
    for ( int i = 0; i < bireysayisi; i++)
    {
        printf("birey %d yasini  giriniz \n", i+1);
        scanf("%d",&yaslar[i]);   
        if(yaslar[i]<1 || yaslar[i]>100){
            printf("1 ile 100 arasinda yaş giriniz \n");
            return 1;
        } 
    }
    printf("ailedeki bireylerin yaşları:\n");

    for ( int i = 0; i < bireysayisi; i++)
    {
        printf("birey %d yaş: %d\n", i+1,yaslar[i]);    
    
    
    if(yaslar[i]>=1 && yaslar[i]<=10){
        tutar+=1;
    }
    else if( yaslar[i]>=11 && yaslar[i]<=17){
        tutar+=1.5;
    }
    else if(yaslar[i]>=18 && yaslar[i]<=26){
        tutar+=4.75;
    }
    else if(yaslar[i]>=27 && yaslar[i]<=50){
        tutar+=7;
    }
    else{
        
            tutar+=5.25;
        }
        
    }
    
    printf("toplam ücret: %.2f\n", tutar);
    return 0;    
}
                                                                                                                                                                                                             