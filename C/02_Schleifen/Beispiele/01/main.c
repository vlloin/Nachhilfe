#include <stdio.h>

int main(){

    int count = 10;

    printf("\n ---- for-schleifen ---- \n");

    for (int i = 0; i < count; i++) {
        printf("Current loop: %d\n", i);
    }

    printf("\n ---- while-schleifen ---- \n");
    
    int condition = 10;
    int userInput = 0;

    while (condition != userInput) {
        printf("Input of a number to cancle or not cancel the while loop!\n");
        scanf("%d\n", &userInput);
    }
    

    printf("\n ---- do-while-schleifen ---- \n");

    int loopCount = 0;

    do{
        loopCount++;
        printf("This is the %d loop\n", loopCount);
    }while(loopCount == 0);

    return 0;
}