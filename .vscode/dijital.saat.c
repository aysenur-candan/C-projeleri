#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {

    int h, m, s;
    int d=1;

    printf("Set the time : \n");
    scanf("%d %d %d",&h,&m,&s);
    if (h>12 || m>59 || s>59)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while (1)
    {
        printf("\n CLOCK : %02d:%02d:%02d", h,m,s);
        s++;

        if(s>59)
        {
            m++;
            s=0;
        }

        if (m>59)
        {
            h++;
            m=0;
        }

        if (h>12)
        {
            h=1;
        }

        sleep(d);
 
    }
        
    return 0;        
       
}