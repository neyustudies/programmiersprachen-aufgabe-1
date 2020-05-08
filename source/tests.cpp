/* 
 * Lisa P.
 * Programmierung Aufgabe 1.8
 * Funktion zur Berechnung des größten gemeinsamen Teilers
 * Entwicklung mit TDD
 */


#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

// Aufgabe 1.8
int gcd (int a, int b) {
	if (a == 0 & b == 0) {
		std::cout << "Fehler. Beide Zahlen dürfen nicht 0 sein!" << std::endl;
		return -1;
    }
	int c = 0;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}


TEST_CASE("describe_gcd", "[gcd]") {
  REQUIRE(gcd(2,4) == 2); 
  REQUIRE(gcd(9,6) == 3); 
  REQUIRE(gcd(1,0) == 1);
  REQUIRE(gcd(0,1) == 1);
  REQUIRE(gcd(0,0) == -1);
  REQUIRE(gcd(3,27) == 3);
  REQUIRE(gcd(13,104) == 13);
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
