//File "Piranha.cpp"

#include "Piranha.h"
#include <iostream>

using namespace std;

Piranha::Piranha(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Piranha::~Piranha(){}

void Piranha::TampilKarakter(){
	cout << "Z" << endl;
}
void Piranha::Bersuara(){
	cout << "Eeer, I'm a piranha." << endl;
}
void Piranha::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(-2,1);
}
