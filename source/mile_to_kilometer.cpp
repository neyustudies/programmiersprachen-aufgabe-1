/* 
 * Lisa P.
 * Programmierung Aufgabe 1.15
 * Entwicklung mit TDD: Funktion, welche Meilen in Kilometer umrechnet
 */
 

#define CATCH_CONFIG_RUNNER
#include <iostream>
#include "catch.hpp"


double mile_to_kilometer(double mile){
	double km = mile*1.609344;
	return km;	
}

int main(){
    double mile;
	std::cout << "Bitte geben Sie die umzurechnende Meilenzahl ein: ";
	std::cin >> mile;
	std::cout << "wird berechnet..." << std::endl;
	std::cout << mile << " Meilen sind umgerechnet " << mile_to_kilometer(mile) << " Kilometer." << std::endl;

	return 0;
}
