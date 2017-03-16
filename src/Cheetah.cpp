// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Cheetah.cpp"

#include "Cheetah.h"
#include <iostream>

using namespace std;

Cheetah::Cheetah(int x, int y) : LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}

Cheetah::~Cheetah(){}

void Cheetah::TampilKarakter(){
	cout << "H" << endl;
}
void Cheetah::Bersuara(){
	cout << "Tah, I'm a cheetah." << endl;
}
void Cheetah::Berjalan(){
	Animal::Bergerak(1,3);
}
