//File "Dolphin.cpp"

#include "Dolphin.h"
#include <iostream>

using namespace std;

Dolphin::Dolphin(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Dolphin::~Dolphin(){}

void Dolphin::TampilKarakter(){
	cout << "I" << endl;
}
void Dolphin::Bersuara(){
	cout << "Hoo, I'm a dolphin." << endl;
}
void Dolphin::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(2,3);
}
