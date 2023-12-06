#include <math.h>
#include <stdio.h>
int main() 
{

    int cap;
    float yaricap;
    float hacim;
    
    printf("ÇAPI GİRİNİZ:");
    scanf("%d", &cap);
    yaricap= cap/2;
    hacim= (4* M_PI* yaricap*yaricap*yaricap)/3;
    
    printf("HACİM= %f \n", hacim);
    return 0;
}