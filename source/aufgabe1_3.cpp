/* 
 * Lisa P.
 * Programmierung Aufgabe 1.3
 * Berechnung der kleinsten Zahl, die durch die Zahlen 1 bis 20 teilbar ist
 */

#include <iostream>


// erweiterter euklidischer Algorithmus
int eeA(int a, int b) {
   if (b == 0)
      return a;
   return eeA(b, a % b);
}

// kleinstes gemeinsames Vielfaches
long kgV(long n) {
    long var = 1;
    for (long i = 1; i <= n; i++)
        var = (var * i)/(eeA(var, i));
    return var;
}
   
int main() {
    long n = 20;
    std::cout << kgV(n) << std::endl;
    
    return 0;
}