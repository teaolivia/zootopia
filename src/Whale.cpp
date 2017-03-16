// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Whale.cpp"

#include "Whale.h"
#include <iostream>

using namespace std;

Whale::Whale(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Whale::~Whale(){}

void Whale::TampilKarakter(){
	cout << "X" << endl;
}
void Whale::Bersuara(){
	cout << "Lash, I'm a whale." << endl;
}
void Whale::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(-1,1);
}
