Programmiersprachen: Aufgabensammlung 1
===========

## Aufgabe 1.2 | Build & Run  

```
mkdir build
cd build
cmake ..
make

cd source
./helloworld
./tests

```

## Aufgabe 1.4 | Typen, Variablen & Werte

```
int main() {
    int         a       = 9;
    bool        b       = false;
    char        c       = 'a';
    double      d       = 1.3;
    int const   five    = 5;
    double      e       = a/five;

    five = d; 

    return 0;
}
```

## Aufgabe 1.5 | Initialisierung & Zuweisung

```
int a = 1, b = 2, c = a + b;    // Initialisierung

int a, b, c;                    // keine Initialisierung, da Zuweisung  
a = 1;                          // nicht bei der Deklaration erfolgt
b = 2;
c = a+b;

```

## Aufgabe 1.6 | Deklaration & Definition

#### Beispiel Klasse:

```
class A;            // Deklaration der Klasse A
class A {           // Defintion der Klasse A
    public:
      A();
      ...
}
```

#### Beispiel Variable:

```
int x;             // Definition; x ist default-initialisiert
extern int y;      // Deklaration; y wird woanders definiert
int z = 4;         // Deklaration und Definition in einem Schritt
```

#### Beispiel Funktion:

``` 
int add(int, int);          // Deklaration

int add(int a, int b) {     // Definition
    return a + b;
}
```

## Aufgabe 1.7 | Gültigkeitsbereich

```
#include <iostream>

int var = 3;
double sum (double a, double b) {
    return a + b;
}

int square (int var) {
    return var * var;
}

int main() {
    for (int i = 0; i != 100; ++i) {
        std::cout << "i^2 = " << square(i) << '\n';
        std::cout << "i+i = " << sum(i,i) << '\n';
    }
    return 0;
}
```