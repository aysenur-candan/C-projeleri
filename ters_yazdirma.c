
//****
#include <stdio.h>

int main()
{
   int indis;
   int dizi[5];

   printf("5 sayı gir \n");
   for ( indis = 0 ; indis < 5; indis++)
   { 
     scanf("%d", &dizi[indis]);
   
   }
   printf("*************\n");
   for (indis = 4; indis >= 0; indis--)
   {
      printf("%d\n", dizi[indis]);
   }
   
}
 
