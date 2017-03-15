//File "Elephant.cpp"

#include "Elephant.h"
#include <iostream>

using namespace std;

Elephant::Elephant(int x, int y) : LandAnimal(defaultberat_badan, tipe_makan, liar, x,y), Animal(defaultberat_badan, tipe_makan, liar, x,y) {
Elephant::~Elephant(){}

void Elephant::TampilKarakter(){
	cout << "L" << endl;
}
void Elephant::Bersuara(){
	cout << "Humphhh, I'm an elephant." << endl;
}
void Elephant::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(1,1);
}
