//File "Dolphin.cpp"

#include "Dolphin.h"
#include <iostream>

using namespace std;

Dolphin::Dolphin() : WaterAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Dolphin::~Dolphin(){}
		
void Dolphin::TampilKarakter(){
	cout << "I" << endl;
}
void Dolphin::Bersuara(){
	cout << "Hoo, I'm a dolphin." << endl;
}
void Dolphin::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
