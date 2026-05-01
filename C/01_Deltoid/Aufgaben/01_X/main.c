#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {

    // Keine Positionen benutzt
    int posX = 0;
    int posX2 = 9;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            // if(j % 5 == 0 ){ // Mod 5 (% 5) bedeutet immer nach 5 positionen
            if(j == posX || j == posX2){ // richtige abfrage mit positionen
            
                printf("*");
                // printf("\n"); // hier noch kein \n
                
            } else { // Bitte auch bei else immer {}
                printf("-");
                // printf(" "); // Leerzeilen funktionieren auch
            }
        }
        posX++;
        posX2--;
        printf("\n");
    }

    // Hier mit schöner mitte
    /*
    int extraPosX = 0;
    int extraPosX2 = 8;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(j == extraPosX || j == extraPosX2){
            
                printf("*");
                
            } else {
                printf("-");
            }
        }
        extraPosX++;
        extraPosX2--;
        printf("\n");
    }
    */

    // Hier die einzelne normale version
    /*
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(j == posX){
                
            printf("*");
            
        } else {
            printf("-");
        }
    }
        posX++;
        printf("\n");
    }
    */

    // Hier auch die gespiegelte einzelne version
    /*
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(j == posX){
                
            printf("*");
            
        } else {
            printf("-");
        }
    }
        posX--; // da wir -- machen gehen wir wieder zurück an den Anfang
        printf("\n");
    }
    */
   

    // Postionen dürfen nicht wie schleifen positionen benannt werden!
    // Gleiche Fehler wie bei den ersten 2 Schleifen
    /*
    int i = 0;
    int j = 0;
   
    // Clean Code (Einrückungen und für bessere lesbarkeit sorgen)
    for(int i = 0;i < 10;i++){
    for(int j = 0;j < 10; j++){
        if(j % 5 == 0 ){
           
            printf("*");
            printf("\n");
           ; // ; ?
        }
        else
        printf("-");
       
     }
     }


     */

   return 0;
}