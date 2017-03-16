// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Shark.cpp"

#include "Shark.h"
#include <iostream>

using namespace std;

Shark::Shark(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}

Shark::~Shark(){}

void Shark::TampilKarakter(){
	cout << "Y" << endl;
}
void Shark::Bersuara(){
	cout << "Shoo, I'm a shark." << endl;
}
void Shark::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(4,-2);
}
