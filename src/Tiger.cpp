// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Tiger.cpp"

#include "Tiger.h"
#include <iostream>

using namespace std;

Tiger::Tiger(int x, int y) : LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}

Tiger::~Tiger(){}

void Tiger::TampilKarakter(){
	cout << "T" << endl;
}
void Tiger::Bersuara(){
	cout << "Grrr, I'm a tiger." << endl;
}
void Tiger::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(2,0);
}
