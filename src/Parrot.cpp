//File "Parrot.cpp"

#include "Parrot.h"
#include <iostream>

using namespace std;

Parrot::Parrot(int x, int y) : FlyingAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Parrot::~Parrot(){}

void Parrot::TampilKarakter(){
	cout << "A" << endl;
}
void Parrot::Bersuara(){
	cout << "Rot, rot, rot, I'm a parrot." << endl;
}
void Parrot::Terbang(){
	//if tidak menembus batas
		Animal::Bergerak(1,1);
}
void Parrot::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(2,1);
}
