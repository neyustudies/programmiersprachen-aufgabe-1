Glossar [A-Z]
=======
* [Array](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#array)
* [Ausführbare Datei](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#ausführbare-datei)
* [C++](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#c)
* [const](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#const)
* [Compiler](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#compiler)
* [Definition](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#definition)
* [Deklaration](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#deklaration)
* [Funktion](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#funktion)
* [Funktionssignatur](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#funktionssignatur)
* [Gültigkeitsbereich](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#gültigkeitsbereich)
* [Header](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#header)
* [Initialisierung](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#initialisierung)
* [iostream](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#iostream)
* [#include](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#include)
* [Kapselung](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#kapselung)
* [Kommentar](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#kommentar)
* [Konstruktur](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#konstruktor)
* [Linker](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#linker)
* [main()](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#main)
* [Methode](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#methode)
* [Objektcode](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#objektcode)
* [Präprozessor](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#präprozessor)
* [Präprozessordirektiven](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#präprozessordirektiven)
* [Programm](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#programm)
* [Quellcode](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#quellcode)
* [std::](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#std)
* [std::cin](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#stdcin)
* [std::cout](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#stdcout)
* [Typ](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#typ)
* [Typkonvertierung](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#typkonvertierung)
* [Variable](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#variable)
* [Verhalten](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#verhalten)
* [Zustand](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#zustand)
* [Zuweisung](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#zuweisung)
* [<<](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#-1)
* [>>](https://github.com/neyustudies/programmiersprachen-aufgabe-1/blob/master/Glossar.md#-1)

---

### Array
Ein Array ist ein Datentyp in dem mehrere Werte gleichen Typs gespeichert werden können. In C++ ist der sogenannte Container Array als Standard-Datentyp verfügbar, nachdem das entsprechende Header-File eingebunden wurde. Der Typ der zu speichernden Werte wird in ```< >``` angegeben, z.B.

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
Maschinenlesbarer Programmcode, der als Folge des Linkens entsteht und direkt ausführbar ist.
```
$ ./hello_world  // Terminal Befehl
```


### C++
C++ ist eine universelle Programmiersprache mit Schwerpunkt auf Systemprogrammierung, die prozedurale Programmierung, Datenabstraktion, objektorientierte Programmierung und generische Programmierung unterstützt. C++ wurde 1979 von Bjarne Stroustrup entworfen und ursprünglich implementiert.


### const
Eine als ```const``` markierte Variable kann nicht geändert werden. Der Versuch, nicht konstante Operationen darauf aufzurufen, führt zu einem Compilerfehler. Werte, die mit ```const``` definiert sind, unterliegen der Typüberprüfung und können anstelle konstanter Ausdrücke verwendet werden. Ein Zeiger auf eine Variable, die als ```const``` deklariert ist, kann nur einem Zeiger zugewiesen werden, der auch als ```const``` deklariert wird.


### Compiler
Ein Compiler ist ein Programm, das den in einer höheren Programmiersprache geschriebenen Quellcode in die maschinenlesbare, binäre Sprache - als ausführbaren Code - übersetzt.

1. Der C++ - Präprozessor kopiert den Inhalt aller enthaltenen Header-Dateien in die Quellcodedatei, generiert Makrocode und ersetzt symbolische Konstanten, die mit ```#define``` definiert sind, durch ihre Werte.
2. Die vom C++ - Präprozessor erzeugte erweiterte Quellcodedatei wird in eine für die Plattform geeignete Assemblersprache kompiliert.
3. Der vom Compiler generierte Assembler-Code wird zu einem geeigneten Objektcode für die Plattform zusammengestellt.
4. Die vom Assembler generierte Objektcodedatei wird mit den Objektcodedateien für alle Bibliotheksfunktionen verknüpft, die zum Erstellen einer ausführbaren Datei verwendet werden.


### Definition
Die Festlegung des Verhaltens einer Funktion wird als Definition bezeichnet. Der Funktionsrumpf legt fest, was beim Aufruf der Funktion erfolgt. Eine Definition stellt dem Compiler alle Informationen zur Verfügung, die er benötigt, um Computercode zu generieren 

- Datentyp: Legt den Aufbau des Typs fest
- Funktion: Legt den Rumpf / die Implementierung der Funktion fest
- Variable: Legt den Speicherort für das Objekt fest


### Deklaration
Die Festlegung der Signatur einer Funktion in Kombination mit dem Funktionsnamen wird als Deklaration bezeichnet. 

- führt Namen und Typen ein ohne Details zu nennen
- Datentyp: Gibt die Existenz eines Typs bekannt, zB. class X;
- Funktion: Gibt die Existenz einer Funktion mit einem bestimmten Namen und entsprechender Signatur bekannt
- Variable: Gibt die Existenz einer Variable eines bestimmten Typs bekannt.

Deklaration und Definition einer Funktion können getrennt erfolgen, z.B.
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
1. einen Rückgabetyp, wie z.B. ```int```
2. eine Parameterliste
3. einen Funktionsnamen, wie z.B. ```main```,
4. einen Funktionsrumpf, der in geschweiften Klammern eine Folge von Anweisungen auflistet


### Funktionssignatur
Die Kombination von Rückgabetyp und Parameterliste wird als Signatur einer Funktion bezeichnet.


### Gültigkeitsbereich
Variablen sind nur nach ihrer Deklaration in dem Block
gültig, in dem sie deklariert wurden (und in dessen Unterblöcken). Der Gültigkeitsbereich, auch ```scope``` genannt, gibt den Bereich an, in dem die deklarierte Klasse / Funktion / Variable nur "gesehen" und verwendet werden kann.
 

### Header
Eine ```.hpp```-Datei enthält Methodendeklarationen und Klassendefinitionen (wobei die Membervariablen und -funktionen deklariert werden). Somit werden Schnittstellen festgelegt, deren Ausprägung dann in anderen Dateien implementiert wird.


### Initialisierung
Die Intialisierung ist das Zuweisen eines Wertes zu einer Variablen (die Variable wird "mit Werten belegt").

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


### Konstruktor
Der Konstruktor ist eine Methode zur Initialisierung eines neu erzeugten Objektes.
- wird implizit aufgerufen, wenn das Objekt erzeugt wird
- initialisiert alle Membervariablen durch Aufruf entsprechender Konstruktoren
- hat in vielen Sprachen den gleichen Namen wie die Klasse
- gibt in C++ keinen Wert zurück


### Linker
Der Linker verbindet alle Objektdateien und Bibliotheken zu einer ausführbaren Datei.

```
$ g++ hello_world.o -o hello_world   // --> ./hello_world 
```

### main()
Die ```main()```-Funktion ist der sog. Programmeinstiegspunkt. Sie kann ggf. Kommandozeilenparameter übergeben bekommen. Der von der ```main``` zurückgegebene Wert ist ein Beendigungscode.


### Methode
Die Syntax für Methoden hängt von der Programmiersprache ab, aber alle Methoden haben die folgenden Komponenten:
1. Einen Namen, der für den Methodenaufruf verwendet wird.
2. Einen Signatur die sich aus dem Rückgabetyp und den Parametertypen der Methode zusammensetzt.
    - Methoden gleichen Namens können über die Signatur unterschieden werden.
    - In C++ geht der Rückgabetyp nicht in die Unterscheidungsmerkmale ein.
    - In anderen Definitionen des Begriffs Signatur geht der Rückgabetyp oft nicht ein.
3. Der Rumpf der Methode enthält den Programmcode. Es kann hier direkt auf alle Instanzvariablen zugegriffen werden.


### Objektcode
Der Objektcode ist der vom Compiler generierte Maschinencode zu jeder Quellcode-Datei.
```
$ g++ -c hello_world.cpp    // --> hello_world.o 
```


### Präprozessor
Der C++ Präprozessor ist ein Macro-gesteuerter Textersetzer. Er wird verwendet, um Header-Dateien zu inkludieren oder um Mehrfach-Inklusion am Anfang und Ende von Header-Dateien zu verhindern:

```
#include "circle.hpp"

#ifndef CIRCLE_HPP
#define CIRCLE_HPP
 ...
#endif
``` 

### Präprozessordirektiven
Beschreibt die Anweisungen, die normalerweise verwendet werden, um das Ändern und Kompilieren von Quellprogrammen in unterschiedlichen Ausführungsumgebungen zu vereinfachen.
Der Präprozessor erkennt z.B. die folgenden Direktiven:
- ```#define``` , ```#error``` , ```#ifdef``` , ```#include``` , ```#line``` , ```#pragma```


### Programm
Ein Programm ist eine Folge von Anweisungen und Definitionen in Maschinensprache oder einer höheren Programmiersprache, die den Computer in die Lage versetzt, bestimmte Aufgaben im Bereich der Datenverarbeitung zu übernehmen.


### Quellcode
Der Quellcode, auch ```source code``` genannt, ist eine in einer höheren Programmiersprache geschriebene Abfolge von Programmanweisungen, die vom Menschen gelesen, aber erst nach einer elektronischen Übersetzung vom Computer verarbeitet werden können.


### std::
```std``` ist ein ```namespace``` und ```::``` ist der Operator für die Bereichsauflösung, der das Nachschlagen von Objekten nach Namen innerhalb eines ```namespace``` ermöglicht.


### std::cin
```std::cin``` ist das in ```iostream``` definierte Standardeingabe-Streamobjekt und wird in der Standardeingabe (stdin) eingegeben. ```cin ``` steht für 'console input'.


### std::cout
```std::cout``` ist das in ```iostream``` definierte Standardausgabe-Streamobjekt und wird in der Standardausgabe (stdout) ausgegeben. ```cout``` steht für 'console output'.


### Typ
Der (Daten-)Typ bezeichnet die Zusammenfassung konkreter Wertebereiche und darauf definierter Operationen zu einer Einheit.
- Elementartypen (```char```, ```short```, ```int```, ```float```, ```bool```,..)
- Standartdatentypen std:: (```string```, ```vector<T>```, ```ostream```)


### Typkonvertierung
Als Typkonvertierung bezeichnet man die Umwandlung eines Datentyps in einen anderen.


### Variable
Eine Variable ist eine Speicherzelle, in der der Wert abgelegt wird. Sie benötigt einen Datentyp.


### Verhalten
Die Aktionen, die eine Instanz der Klasse durch den Methodenaufruf durchführt - durch Methoden implementiert.


### Zustand
Die Daten, die in einem Objekt gespeichert sind, um sein Verhalten zu implementieren. Diese Daten werden in Instanzvariablen (Membervariablen, Attribute, Datenfelder, fields, data members) gespeichert.


### Zuweisung
Bei der Zuweisung wird ein neuer Wert an ein existierendes Objekt zugewiesen.


### <<
Die Standardbibliothek definiert den Operator ```<<```, um Daten für bestimmte Datentypen in Ausgabeströme einzufügen. ```stream << content``` fügt ```content``` in den Stream ein und gibt denselben, aber aktualisierten Stream zurück. Dadurch können Stream-Einfügungen verkettet werden: ```std::cout << "Foo" << " Bar";``` druckt "FooBar" auf die Konsole.


### >>
Die Standardbibliothek definiert den Operator ```>>```, um Daten für bestimmte Datentypen in Eingabeströme einzufügen.