//File "Peacock.cpp"

#include "Peacock.h"
#include <iostream>

using namespace std;

Peacock::Peacock(int x, int y) : FlyingAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Peacock::~Peacock(){}

void Peacock::TampilKarakter(){
	cout << "P" << endl;
}
void Peacock::Bersuara(){
	cout << "Cock, cock, cock, I'm a peacock." << endl;
}
void Peacock::Terbang(){
	//if tidak menembus batas
		Animal::Bergerak(1,2);
}
void Peacock::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(2,1);
}
