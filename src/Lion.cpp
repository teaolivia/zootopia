//File "Lion.cpp"

#include "Lion.h"
#include <iostream>

using namespace std;

Lion::Lion(int x, int y) : LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Lion::~Lion(){}

void Lion::TampilKarakter(){
	cout << "N" << endl;
}
void Lion::Bersuara(){
	cout << "Roar, I'm a lion." << endl;
}
void Lion::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(1,2);
}
