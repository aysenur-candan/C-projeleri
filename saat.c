#include <stdio.h>

int main() {
    int saat;
    
    printf("SAATİ GİRİNİZ: \n");
    scanf("%d", &saat);
    
    if (saat < 6) {
        printf("iyi uykular \n");
    }
    else if (saat >= 6 && saat < 11) {
        printf("günaydın \n");
    }
    else if (saat >= 11 && saat < 17) {
        printf("iyi günler \n");
    }
    else if (saat >= 17 && saat < 22) {
        printf("iyi akşamlar \n");
    }
    else if (saat >= 22 && saat < 24) {
        printf("iyi geceler \n");
    }
    else {
        if (saat > 24) {
            printf("iyi uykular \n");
        }
    }
    
    return 0;
}

