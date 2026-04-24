#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Hilfsfunktion zum Ausgeben eines Arrays
void printArray(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Array umkehren (reverse)
void reverseArray(int arr[], int length) {
    for(int i = 0; i < length / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

// Minimum finden
int findMin(int arr[], int length) {
    int min = arr[0];
    for(int i = 1; i < length; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Maximum finden
int findMax(int arr[], int length) {
    int max = arr[0];
    for(int i = 1; i < length; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Summe berechnen
int sum(int arr[], int length) {
    int total = 0;
    for(int i = 0; i < length; i++) {
        total += arr[i];
    }
    return total;
}

// Durchschnitt berechnen
double average(int arr[], int length) {
    return (double)sum(arr, length) / length;
}

// Element suchen (gibt Index zurück, -1 wenn nicht gefunden)
int search(int arr[], int length, int value) {
    for(int i = 0; i < length; i++) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;  // Nicht gefunden
}

// Prüfen ob Array ein Element enthält
bool contains(int arr[], int length, int value) {
    return search(arr, length, value) != -1;
}

// Array kopieren
void copyArray(int source[], int dest[], int length) {
    for(int i = 0; i < length; i++) {
        dest[i] = source[i];
    }
    // Alternative mit memcpy:
    // memcpy(dest, source, length * sizeof(int));
}

// Alle Vorkommen eines Werts zählen
int countOccurrences(int arr[], int length, int value) {
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    printf("=== Erweiterte Array-Operationen in C ===\n\n");
    
    // Test-Array
    int numbers[] = {42, 17, 88, 23, 17, 56, 91, 17, 45, 23};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Original Array: ");
    printArray(numbers, length);
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // Minimum und Maximum
    printf("### Minimum und Maximum ###\n");
    printf("Minimum: %d\n", findMin(numbers, length));
    printf("Maximum: %d\n", findMax(numbers, length));
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // Summe und Durchschnitt
    printf("### Summe und Durchschnitt ###\n");
    printf("Summe: %d\n", sum(numbers, length));
    printf("Durchschnitt: %.2f\n", average(numbers, length));
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // Suchen
    printf("### Suchen ###\n");
    int searchValue = 88;
    int index = search(numbers, length, searchValue);
    if(index != -1) {
        printf("%d gefunden an Index %d\n", searchValue, index);
    } else {
        printf("%d nicht gefunden\n", searchValue);
    }
    
    printf("Array enthält 17? %s\n", contains(numbers, length, 17) ? "Ja" : "Nein");
    printf("Array enthält 100? %s\n", contains(numbers, length, 100) ? "Ja" : "Nein");
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // Vorkommen zählen
    printf("### Vorkommen zählen ###\n");
    printf("17 kommt %d mal vor\n", countOccurrences(numbers, length, 17));
    printf("23 kommt %d mal vor\n", countOccurrences(numbers, length, 23));
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // Array kopieren
    printf("### Array kopieren ###\n");
    int copy[10];
    copyArray(numbers, copy, length);
    printf("Kopie: ");
    printArray(copy, length);
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // Array umkehren
    printf("### Array umkehren ###\n");
    int reversed[10];
    copyArray(numbers, reversed, length);
    reverseArray(reversed, length);
    printf("Umgekehrt: ");
    printArray(reversed, length);
    printf("Original (unverändert): ");
    printArray(numbers, length);
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // 2D Arrays (Mehrdimensionale Arrays)
    printf("### 2D Arrays (Matrix) ###\n");
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("Matrix (3x4):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // Summe einer Zeile
    int row = 1;
    int rowSum = 0;
    for(int j = 0; j < 4; j++) {
        rowSum += matrix[row][j];
    }
    printf("Summe der Zeile %d: %d\n", row, rowSum);
    
    // Summe einer Spalte
    int col = 2;
    int colSum = 0;
    for(int i = 0; i < 3; i++) {
        colSum += matrix[i][col];
    }
    printf("Summe der Spalte %d: %d\n", col, colSum);
    printf("\n");
    
    // -------------------------------------------------------------------------------------------------------------
    // String-Arrays (char Arrays)
    printf("### String-Arrays ###\n");
    char name[] = "Claude";
    printf("Name: %s\n", name);
    printf("Länge: %lu\n", strlen(name));
    printf("Erstes Zeichen: %c\n", name[0]);
    
    // Array von Strings
    char* names[] = {"Alice", "Bob", "Charlie", "Diana"};
    int nameCount = sizeof(names) / sizeof(names[0]);
    
    printf("\nNamen:\n");
    for(int i = 0; i < nameCount; i++) {
        printf("%d. %s\n", i+1, names[i]);
    }
    
    return 0;
}
