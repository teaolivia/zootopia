//File "Eagle.cpp"

#include "Eagle.h"
#include <iostream>

using namespace std;

Eagle::Eagle(int x, int y) : FlyingAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar) {}
Eagle::~Eagle(){}

void Eagle::TampilKarakter(){
	cout << "E" << endl;
}
void Eagle::Bersuara(){
	cout << "Girl, girl, girl, I'm an eagle." << endl;
}
void Eagle::Terbang(){
	//if tidak menembus batas
		Animal::Bergerak(3,3);
}
void Eagle::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(1,1);
}
