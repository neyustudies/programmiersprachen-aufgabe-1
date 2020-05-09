Glossar [A-Z]
=======

### Array
Ein Array ist ein Datentyp in dem mehrere Werte gleichen Typs gespeichert werden können. In C++ ist der sogenannte Container Array als Standartdatentyp verfügbar, nachdem das entsprechende Header-File eingebunden wurde. Der Typ der zu speichernden Werte wird in ```< >``` angegeben, z.B.

```
#include <array>

int main() {
    // legt ein Array mit 50 int an
    std::array<int, 50> numbers;

    numbers[49] = -4;       // schreibender Zugriff
    int i = numbers[49];    // lesender Zugriff
}
```

### Ausführbare Datei


### Ausgabe



### C++
C++ ist eine universelle Programmiersprache mit Schwerpunkt auf Systemprogrammierung, die prozedurale Programmierung, Datenabstraktion, objektorientierte Programmierung und generische Programmierung unterstützt. C++ wurde 1979 von Bjarne Stroustrup entworfen und ursprünglich implementiert.


### const



### Compiler
Ein Compiler ist ein Programm, das den in einer höheren Programmiersprache geschriebenen Quellcode in die maschinenlesbare, binäre Sprache - als ausführbaren Code - übersetzt.


### Definition
Die Festlegung des Verhaltens einer Funktion wird als Definition bezeichnet. Der Funktionsrumpf legt fest, was beim Aufruf der Funktion erfolgt. 


### Deklaration
Die Festlegung der Signatur einer Funktion in Kombination mit dem Funktionsnamen wird als Deklaration bezeichnet. Deklaration und Definition einer Funktion können getrennt erfolgen, z.B.
```
// Deklaration
int add(int, int);

// Definition
int add(int a, int b) {
    return a + b;
}
```

### Funktion
Eine C++-Funktion hat folgende vier Bestandteile:
1. einen Rückgabetyp, wie z.B. int
2. eine Parameterliste
3. einen Funktionsnamen, wie z.B. main,
4. einen Funktionsrumpf, der in geschweiften Klammern eine Folge von Anweisungen auflistet


### Funktionssignatur
Die Kombination von Rückgabetyp und Parameterliste wird als Signatur einer Funktion bezeichnet.


### Gültigkeitsbereich

### Header
Eine ```.hpp```-Datei enthählt Methodendeklarationen und Klassendefinitionen (wobei die Membervariablen und -funktionen deklariert werden). Somit werden Schnittstellen festgelegt, deren Ausprägung dann in anderen Dateien implementiert wird.


### Initialisierung


### iostream
```iostream``` ist eine Standard-Bibliothekskopfdatei, die Definitionen der Standard-Eingabe- und Ausgabeströme enthält. 



### include
Mittels ```#include``` können weitere Quellcode-Teile in das Programm integriert werden. Diese Dateien werden vom Präprozessor eingelesen und an Stelle der ```#include```-Anweisung in die Datei geschrieben.

```
// Standard-Bibliothek stdio.h importieren:
#include <stdio.h>
#include <stdio.h>

// Lokale Header-Datei input.h importieren:
#include "input.h"
```

### Kapselung
Kapselung bedeutet, dass man ein System aus zwei Ansichten betrachten kann. Die äußere Ansicht oder Schnittstelle beschreibt was ein Objekt macht bzw. was man damit machen kann. Die innere Ansicht oder Implementierung beschreibt, wie das Objekt seine Funktionalität implementiert.

### Kommentar
Ein Kommentar ist eine Möglichkeit, beliebigen Text in den Quellcode einzufügen, ohne dass der C++ - Compiler ihn mit funktionaler Bedeutung interpretiert. Kommentare werden verwendet, um Einblick in das Design oder die Methode eines Programms zu geben. Sie können einzeilig ```//``` oder mehrzeilig ```/* */``` sein.

### Linker
Der Linker verbindet alle Objektdateien und Bibliotheken zu einer ausführbaren Datei


### main()
Die ```main()```-Funktion ist der sog. Programmeinstiegspunkt. Sie kann ggf. Kommandozeilenparameter übergeben bekommen. Der von der ```main``` zurückgegebene Wert ist ein Beendigungscode.

### Methode
Die Syntax für Methoden hängt von der Programmiersprache ab, aber alle Methoden haben die folgenden Komponenten:
1. Einen Namen, der für den Methodenaufruf verwendet wird.
2. Einen Signatur die sich aus dem Rückgabetyp und den Parametertypen der Methode zusammensetzt.
    - Methoden gleichen Namens können über die Signatur unterschieden werden.
    - In C++ geht der Rückgabetyp nicht in die Unterscheidungsmerkmale ein.
    - In anderen Definitionen des Begriffs Signatur geht der Rückgabetyp oft nicht ein.
3. Der Rumpf der Methode enthält den Programmcode. Es kann hier direkt auf alle Instanzvariablen zugegriffen werden

### Objektcode

### Präprozessor
Der C++ Präprozessor ist ein Macro-gesteuerter Textersetzer. Er wird verwendet, um Header-Dateien zu inkludieren oder um Mehrfach-Inklusion am Anfang und Ende von Header-Dateien zu verhindern:

```
#include "circle.hpp"

#ifndef CIRCLE_HPP
#define CIRCLE_HPP
 ...
#endif
``` 

### Programm

### Quellcode

### Typ

### Typkonvertierung

### Variable

### Verhalten
Die Aktionen, die eine Instanz der Klasse durch den Methodenaufruf durchführt - durch Methoden implementiert.

### Wert

### Zustand
Die Daten, die in einem Objekt gespeichert sind, um sein Verhalten zu implementieren. Diese Daten werden in Instanzvariablen (Membervariablen, Attribute, Datenfelder, fields, data members) gespeichert.

### Zuweisung

### <<

### >>