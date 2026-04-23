# Java Arrays – Übersicht

## 1. Aufbau eines Arrays

Ein **Array** in Java ist eine **Datenstruktur**, die mehrere Werte **des gleichen Typs** speichern kann.
Jeder Wert im Array hat einen **Index**, beginnend bei **0**.

Visualisierung eines Arrays:

```
Index:  0   1   2   3   4
Wert:  10  20  30  40  50
```

### Syntax

```java
// Array-Deklaration
Datentyp[] arrayName;

// Array-Erstellung
arrayName = new Datentyp[Größe];
```

Beispiel:

```java
int[] numbers = new int[5]; // Array mit 5 Zahlen
```

---

## 2. Unterschiedliche Arten von Arrays

### 2.1 Array mit Zahlen

```java
int[] numbers = {10, 20, 30, 40, 50};
```

### 2.2 Array mit Texten

```java
String[] namen = {"Jay", "Zane", "Cole", "Kai"};
```

### 2.3 Array mit Wahrheitswerten

```java
boolean[] flags = {true, false, true};
```

---

## 3. Zugriff auf Array-Werte

```java
System.out.println(numbers[0]); // Ausgabe: 10
numbers[2] = 35;                // Wert ändern
System.out.println(numbers[2]); // Ausgabe: 35
```

---

## 4. Wichtige Array-Funktionen / Methoden

* `array.length` → Anzahl der Elemente im Array
* Zugriff über Index → `array[index]`
* Durchlaufen mit Schleifen:

```java
for (int i = 0; i < numbers.length; i++) {
    System.out.println(numbers[i]);
}

// Alternativ mit for-each (für dich eher nichts)
for (int n : numbers) {
    System.out.println(n);
}
```

---

## 5. Array erweitern

Arrays in Java haben **feste Größe**, man kann sie nicht direkt vergrößern.
Man kann aber ein **neues Array erstellen** und die alten Werte kopieren.

```java
int[] oldArray = {10, 20, 30};
int[] newArray = new int[oldArray.length + 2]; // Array um 2 vergrößern

// Werte kopieren
for (int i = 0; i < oldArray.length; i++) {
    newArray[i] = oldArray[i];
}

// Neue Werte hinzufügen
newArray[3] = 40;
newArray[4] = 50;

alt = neu; // Jetzt zeigt alt auf das größere Array
```

---

## 6. Array verkleinern

Ebenso muss man ein neues Array erstellen und nur die gewünschten Werte übernehmen:

```java
int[] oldArray = {10, 20, 30, 40, 50};
int[] newArray = new int[3]; // Nur 3 Werte behalten

for (int i = 0; i < newArray.length; i++) {
    newArray[i] = oldArray[i]; // Erste 3 Werte kopieren
}

oldArray = newArray; // alt zeigt jetzt auf das kleinere Array
```

---

## 7. Zusammenfassung

* Arrays speichern **mehrere Werte des gleichen Typs**.
* **Index beginnt bei 0**, Zugriff über `array[index]`.
* Größe ist **fest**, Erweiterung/Verkürzung über neues Array.
* Typische Operationen: Zugriff, ändern, durchlaufen, kopieren.
