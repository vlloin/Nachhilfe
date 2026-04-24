# C Arrays – Übersicht

## 1. Aufbau eines Arrays

Ein **Array** in C ist eine **Datenstruktur**, die mehrere Werte **des gleichen Typs** speichern kann.
Jeder Wert im Array hat einen **Index**, beginnend bei **0**.

Visualisierung eines Arrays:

```
Index:  0   1   2   3   4
Wert:  10  20  30  40  50
```

### Syntax

```c
// Array-Deklaration mit fester Größe
Datentyp arrayName[Größe];

// Array-Initialisierung
int numbers[5] = {10, 20, 30, 40, 50};
```

Beispiel:

```c
int numbers[5]; // Array mit 5 Zahlen
```

---

## 2. Unterschiedliche Arten von Arrays

### 2.1 Array mit Zahlen

```c
int numbers[] = {10, 20, 30, 40, 50};
// oder
int numbers[5] = {10, 20, 30, 40, 50};
```

### 2.2 Array mit Zeichen (Strings)

```c
char name[] = "Hallo";  // String als char-Array
char namen[][10] = {"Jay", "Zane", "Cole", "Kai"};  // Array von Strings
```

### 2.3 Array mit Wahrheitswerten

```c
#include <stdbool.h>  // Für bool-Typ
bool flags[] = {true, false, true};
// oder ohne stdbool.h:
int flags[] = {1, 0, 1};  // 1 = true, 0 = false
```

---

## 3. Zugriff auf Array-Werte

```c
printf("%d\n", numbers[0]); // Ausgabe: 10
numbers[2] = 35;            // Wert ändern
printf("%d\n", numbers[2]); // Ausgabe: 35
```

---

## 4. Wichtige Array-Operationen

### 4.1 Länge berechnen

```c
int length = sizeof(numbers) / sizeof(numbers[0]);
```

**Wichtig:** Dies funktioniert nur bei statischen Arrays, nicht bei Zeigern!

### 4.2 Durchlaufen mit Schleifen

```c
int length = sizeof(numbers) / sizeof(numbers[0]);

for (int i = 0; i < length; i++) {
    printf("%d ", numbers[i]);
}
printf("\n");
```

---

## 5. Dynamische Arrays (mit malloc/realloc)

In C haben statische Arrays **feste Größe**. Für dynamische Größenänderung verwendet man `malloc()` und `realloc()`.

### 5.1 Dynamisches Array erstellen

```c
#include <stdlib.h>

// Speicher für 5 Integers allokieren
int* numbers = (int*)malloc(5 * sizeof(int));

// Werte zuweisen
for(int i = 0; i < 5; i++) {
    numbers[i] = i * 10;
}
```

### 5.2 Array erweitern

```c
// Array von 5 auf 7 Elemente vergrößern
numbers = (int*)realloc(numbers, 7 * sizeof(int));

// Neue Werte hinzufügen
numbers[5] = 50;
numbers[6] = 60;
```

### 5.3 Speicher freigeben

```c
free(numbers);  // WICHTIG: Speicher immer freigeben!
```

---

## 6. Array verkleinern

### Methode 1: Mit realloc()

```c
int* numbers = (int*)malloc(5 * sizeof(int));
// ... Werte zuweisen ...

// Array auf 3 Elemente verkleinern
numbers = (int*)realloc(numbers, 3 * sizeof(int));
```

### Methode 2: Neues Array erstellen

```c
int oldArray[] = {10, 20, 30, 40, 50};
int newArray[3]; // Nur 3 Werte behalten

for (int i = 0; i < 3; i++) {
    newArray[i] = oldArray[i]; // Erste 3 Werte kopieren
}
```

---

## 7. Element löschen (aus der Mitte)

```c
int numbers[] = {10, 20, 30, 40, 50};
int length = 5;
int indexToDelete = 2;  // Löschen von 30

// Neues Array erstellen
int* newArray = (int*)malloc((length - 1) * sizeof(int));

// Elemente vor dem zu löschenden Index kopieren
for(int i = 0; i < indexToDelete; i++) {
    newArray[i] = numbers[i];
}

// Elemente nach dem zu löschenden Index kopieren
for(int i = indexToDelete; i < length - 1; i++) {
    newArray[i] = numbers[i + 1];
}

free(newArray);  // Später freigeben
```

---

## 8. Zwei Arrays kombinieren

```c
int first[] = {1, 2, 3};
int second[] = {4, 5, 6};
int combined[6];

// Erstes Array kopieren
for(int i = 0; i < 3; i++) {
    combined[i] = first[i];
}

// Zweites Array anhängen
for(int i = 0; i < 3; i++) {
    combined[i + 3] = second[i];
}
```

---

## 9. Wichtige Unterschiede zu Java

| Aspekt | Java | C |
|--------|------|---|
| **Länge** | `array.length` | `sizeof(array) / sizeof(array[0])` |
| **Dynamische Größe** | Automatisch mit neuen Arrays | `malloc()`, `realloc()`, `free()` |
| **Speicherverwaltung** | Automatisch (Garbage Collection) | Manuell (`free()` erforderlich!) |
| **Strings** | `String` Objekt | `char` Array (z.B. `char str[]`) |
| **Bound Checking** | Ja (wirft Exception) | Nein (kann zu Fehlern führen!) |

---

## 10. Häufige Fehler vermeiden

### ⚠️ Speicher nicht freigeben (Memory Leak)

```c
int* arr = (int*)malloc(10 * sizeof(int));
// ... Code ...
free(arr);  // ← NICHT VERGESSEN!
```

### ⚠️ Array-Grenzen überschreiten

```c
int arr[5];
arr[10] = 42;  // ❌ FEHLER: Index außerhalb der Grenzen!
```

### ⚠️ sizeof() bei Zeigern verwenden

```c
void function(int arr[]) {
    int length = sizeof(arr) / sizeof(arr[0]);  // ❌ FALSCH!
    // arr ist hier ein Zeiger, nicht das Array selbst
}

// Stattdessen: Länge als Parameter übergeben
void function(int arr[], int length) {
    // ...
}
```

---

## 11. Zusammenfassung

* Arrays speichern **mehrere Werte des gleichen Typs**.
* **Index beginnt bei 0**, Zugriff über `array[index]`.
* Statische Arrays haben **feste Größe**.
* Dynamische Arrays mit `malloc()`, `realloc()`, `free()`.
* **Wichtig:** Speicher immer mit `free()` freigeben!
* C macht **kein automatisches Bound Checking** – Vorsicht bei Indizes!

---

## 12. Kompilieren und Ausführen

```bash
# Kompilieren
gcc arrays.c -o arrays

# Ausführen
./arrays
```
