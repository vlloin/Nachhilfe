#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hilfsfunktion zum Ausgeben eines Arrays
void printArray(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Seed für Zufallszahlen
    srand(time(NULL));
    
    int numbers[10];
    int length = 10;
    
    // -------------------------------------------------------------------------------------------------------------
    // Random fill
    printf("\n### Random fill ###\n");
    
    for(int i = 0; i < length; i++) {
        numbers[i] = rand() % 100;  // Zufallszahl zwischen 0 und 99
    }
    
    // Ausgabe
    printArray(numbers, length);
    
    // -------------------------------------------------------------------------------------------------------------
    // Bubble Sort aufsteigend
    printf("\n### Bubble Sort ###\n");
    
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            if(numbers[i] < numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // Ausgabe
    printArray(numbers, length);
    
    // -------------------------------------------------------------------------------------------------------------
    // Add (Element hinzufügen)
    printf("\n### Add ###\n");
    
    // Dynamisches Array erstellen
    int* dynamicNumbers = (int*)malloc(length * sizeof(int));
    for(int i = 0; i < length; i++) {
        dynamicNumbers[i] = numbers[i];
    }
    
    // Array vergrößern
    int newLength = length + 1;
    dynamicNumbers = (int*)realloc(dynamicNumbers, newLength * sizeof(int));
    dynamicNumbers[length] = rand() % 100;
    
    // Ausgabe
    printArray(dynamicNumbers, newLength);
    
    // -------------------------------------------------------------------------------------------------------------
    // Delete (Element löschen)
    printf("\n### Delete ###\n");
    
    int indexToBeDeleted = rand() % newLength;  // Zufälliger Index
    printf("Lösche Index: %d (Wert: %d)\n", indexToBeDeleted, dynamicNumbers[indexToBeDeleted]);
    
    // Neues kleineres Array erstellen
    int* smallerArray = (int*)malloc((newLength - 1) * sizeof(int));
    
    // Elemente vor dem zu löschenden Index kopieren
    for(int i = 0; i < indexToBeDeleted; i++) {
        smallerArray[i] = dynamicNumbers[i];
    }
    
    // Elemente nach dem zu löschenden Index kopieren
    for(int i = indexToBeDeleted; i < newLength - 1; i++) {
        smallerArray[i] = dynamicNumbers[i + 1];
    }
    
    // Ausgabe
    printArray(smallerArray, newLength - 1);
    
    // Speicher freigeben
    free(dynamicNumbers);
    
    // Aktualisieren für nächsten Abschnitt
    newLength--;
    dynamicNumbers = smallerArray;
    
    // -------------------------------------------------------------------------------------------------------------
    // Combine 2 Arrays (2 Arrays kombinieren)
    printf("\n### Combine 2 Arrays ###\n");
    
    int firstArray[10];
    int secondArray[10];
    
    for(int i = 0; i < 10; i++) {
        firstArray[i] = i;
        secondArray[i] = i + 10;
    }
    
    // Ausgabe der einzelnen Arrays
    printf("Erstes Array: ");
    printArray(firstArray, 10);
    
    printf("Zweites Array: ");
    printArray(secondArray, 10);
    
    // Arrays kombinieren
    int combinedArray[20];
    for(int i = 0; i < 10; i++) {
        combinedArray[i] = firstArray[i];
    }
    for(int i = 0; i < 10; i++) {
        combinedArray[i + 10] = secondArray[i];
    }
    
    // Ausgabe des kombinierten Arrays
    printf("Kombiniertes Array: ");
    printArray(combinedArray, 20);
    
    // Speicher freigeben
    free(dynamicNumbers);
    
    return 0;
}
