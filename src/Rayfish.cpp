//File "Rayfish.cpp"

#include "Rayfish.h"
#include <iostream>

using namespace std;

Rayfish::Rayfish(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
Rayfish::~Rayfish(){}

void Rayfish::TampilKarakter(){
	cout << "X" << endl;
}
void Rayfish::Bersuara(){
	cout << "Lash, I'm a rayfish." << endl;
}
void Rayfish::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(1,1);
}
