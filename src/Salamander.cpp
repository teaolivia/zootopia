//File "Salamander.cpp"

#include "Salamander.h"
#include <iostream>

using namespace std;

Salamander::Salamander(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Salamander::~Salamander(){}

void Salamander::TampilKarakter(){
	cout << "K" << endl;
}
void Salamander::Bersuara(){
	cout << "Salll, I'm a salamander." << endl;
}
void Salamander::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(-1,-2);
}
void Salamander::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(0,2);
}
