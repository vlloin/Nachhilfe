# Java Listen – Übersicht

## 1. Was ist eine Liste?

Eine **Liste** ist eine **Datenstruktur**, die mehrere Werte speichern kann, ähnlich wie ein Array.
Der Unterschied zu Arrays:

* Listen können **dynamisch wachsen und schrumpfen**.
* Sie müssen nicht vorher die Größe festlegen.
* Listen sind Teil der **Java Collections Framework**.

In Java verwendet man dafür oft `ArrayList`.

---

## 2. Importieren der List-Klasse

```java
import java.util.ArrayList;
import java.util.List;
```

---

## 3. Eine Liste erstellen

```java
List<Integer> numbers = new ArrayList<>(); // Liste für Integer
List<String> names = new ArrayList<>();   // Liste für Strings
```

---

## 4. Werte zur Liste hinzufügen

```java
numbers.add(10);
numbers.add(20);
numbers.add(30);

names.add("Zane");
names.add("Cole");
names.add("Kai");
```

---

## 5. Zugriff auf Werte

```java
System.out.println(numbers.get(0)); // Ausgabe: 10
numbers.set(1, 25);                 // Wert ändern
System.out.println(numbers.get(1)); // Ausgabe: 25

System.out.println(names.get(0)); // Ausgabe: Alice
names.set(1, "Jay");             // Wert ändern
System.out.println(names.get(1)); // Ausgabe: Bob
```

---

## 6. Liste durchlaufen

```java
// For-Schleife
for (int i = 0; i < numbers.size(); i++) {
    System.out.println(numbers.get(i));
}

// For-each Schleife
for (String name : names) {
    System.out.println(name);
}
```

---

## 7. Elemente entfernen

```java
numbers.remove(0);                 // Element an Index 0 entfernen
numbers.remove(Integer.valueOf(30)); // Element mit Wert 30 entfernen

names.remove(0);            // Element an Index 0 entfernen
names.remove("Jay");     // Element mit Wert Jay entfernen
```

---

## 8. Weitere nützliche Methoden

| Methode               | Beschreibung                |
| --------------------- | --------------------------- |
| `add(element)`        | Element hinzufügen          |
| `get(index)`          | Element am Index lesen      |
| `set(index, element)` | Element am Index ändern     |
| `remove(index)`       | Element am Index entfernen  |
| `remove(Object o)`    | Element nach Wert entfernen |
| `size()`              | Anzahl der Elemente         |
| `clear()`             | Alle Elemente löschen       |

---

## 9. Zusammenfassung

* Listen sind **flexibel** und wachsen automatisch.
* Zugriff auf Elemente erfolgt über `get(index)`.
* Werte können hinzugefügt, geändert oder entfernt werden.
* Typische Implementierung: `ArrayList`, Teil von `java.util`.
