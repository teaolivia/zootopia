//File "Panther.cpp"

#include "Panther.h"
#include <iostream>

using namespace std;

Panther::Panther(int x, int y) : LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Panther::~Panther(){}

void Panther::TampilKarakter(){
	cout << "R" << endl;
}
void Panther::Bersuara(){
	cout << "Rrr, I'm a panther." << endl;
}
void Panther::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(3,2);
}
