/* 
 * Lisa P.
 * Programmierung Aufgabe 1.13
 * Berechnung der Fakultaet einer natuerlichen Zahl
 * Entwicklung mit TDD
 */

#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

int factorial (int num) {
    if (num < 0) {
        std::cout << num << " ist keine positive Zahl!" << std::endl;
        return -1;
    }
    int erg = 1;
    for (int i = 1; i <= num; i++) {
        erg = erg * i;
    }
    return erg;
}

TEST_CASE("describe_factorial", "[factorial]") {
  REQUIRE(factorial(-10) == -1);
  REQUIRE(factorial(-1) == -1);
  REQUIRE(factorial(0) == 1);
  REQUIRE(factorial(4) == 24);
  REQUIRE(factorial(7) == 5040);
  REQUIRE(factorial(10) == 3628800);
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
