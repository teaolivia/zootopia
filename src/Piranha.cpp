//File "Piranha.cpp"

#include "Piranha.h"
#include <iostream>

using namespace std;

Piranha::Piranha() : WaterAnimal(defaultBeratBadan) {}
Piranha::~Piranha(){}
		
void Piranha::TampilKarakter(){
	cout << "Z" << endl;
}
void Piranha::Bersuara(){
	cout << "Eeer, I'm a piranha." << endl;
}
void Piranha::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
