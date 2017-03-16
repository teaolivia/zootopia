// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Dove.cpp"

#include "Dove.h"
#include <iostream>

using namespace std;

Dove::Dove(int x, int y) : FlyingAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar) {}
Dove::~Dove(){}

void Dove::TampilKarakter(){
	cout << "D" << endl;
}
void Dove::Bersuara(){
	cout << "Ove, ove, ove, I'm a dove." << endl;
}
void Dove::Terbang(){
	//if tidak menembus batas
		Animal::Bergerak(-1,-1);
}
void Dove::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(-1,1);
}
