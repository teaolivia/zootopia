//File "Frog.cpp"

#include "Frog.h"
#include <iostream>

using namespace std;

Frog::Frog(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Frog::~Frog(){}

void Frog::TampilKarakter(){
	cout << "F" << endl;
}
void Frog::Bersuara(){
	cout << "Crock, I'm a frog." << endl;
}
void Frog::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(2,-2);
}
void Frog::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(-1,-2);
}
