/* 
 * Lisa P.
 * Programmierung Aufgabe 1.9
 * Entwicklung mit TDD
 * Berechnung der Quersumme einer ganzen Zahl
 */


#define CATCH_CONFIG_RUNNER
#include <catch.hpp>


static int checksum (int n) {
    int sum = 0;
    if (n < 1) {
        return -1;
    }
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

TEST_CASE("describe_checksum", "[checksum]") {
  REQUIRE(checksum(-13) == -1);
  REQUIRE(checksum(-1) == -1);
  REQUIRE(checksum(0) == -1);
  REQUIRE(checksum(1) == 1);
  REQUIRE(checksum(1234) == 10);
  REQUIRE(checksum(-120898) == -1);
  REQUIRE(checksum(120898) == 28);
  
}

int main(int argc, char* argv[]) {
   return Catch::Session().run(argc, argv);
}