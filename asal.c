
#include <stdio.h>

int main()
{

int bayrak=1;
int sayi;
int i;

printf("Bir sayı gir:\n");
scanf("%d", &sayi);

if (sayi <= 1){
    bayrak = 0;
}

for (i = sayi - 1; i>1 && bayrak == 1; i--){
    if (sayi % i == 0){
        bayrak = 0;
    }

}

if (bayrak){
    printf("Bu sayı asal\n");
}
else{
    printf("BU asal değil\n");
}
}
 
