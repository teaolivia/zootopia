// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Cendrawasih.cpp"

#include "Cendrawasih.h"
#include <iostream>

using namespace std;

Cendrawasih::Cendrawasih(int x, int y) : FlyingAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}

Cendrawasih::~Cendrawasih(){}

void Cendrawasih::TampilKarakter(){
	cout << "C" << endl;
}

void Cendrawasih::Bersuara(){
	cout << "See, see, see, I'm a cendrawasih." << endl;
}
void Cendrawasih::Terbang(){
	//if tidak menembus batas
	Animal::Bergerak(1,1);
}
void Cendrawasih::Berjalan(){
	//if tidak menembus batas
	Animal::Bergerak(0,-1);
}
