#include <stdio.h>

int main() {

    int posFirst = 5; // number
    int posSecond = 5; // number2

    for(int y = 0; y < 6; y++){
        for(int x = 0; x < 11; x++){
            if(x == posFirst || x == posSecond) {
                printf("*");
            } else {
                printf("_");
            }
        }
        printf("\n");
        posFirst--;
        posSecond++;
    }
    
    posFirst++;
    posSecond--;
    
    for(int y = 0; y < 6; y++){
        for(int x = 0; x < 11; x++){
            if(x == posFirst || x == posSecond) {
                printf("*");
            } else {
                printf("_");
            }
        }
        printf("\n");
        posFirst++;
        posSecond--;
    }

    return 0;
}