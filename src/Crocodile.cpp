//File "Crocodile.cpp"

#include "Crocodile.h"
#include <iostream>

using namespace std;

Crocodile::Crocodile(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Crocodile::~Crocodile(){}

void Crocodile::TampilKarakter(){
	cout << "O" << endl;
}
void Crocodile::Bersuara(){
	cout << "Srak, I'm a crocodile." << endl;
}
void Crocodile::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(-1,-2);
}
void Crocodile::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(1,1);
}
