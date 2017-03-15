//File "Salamander.cpp"

#include "Salamander.h"
#include <iostream>

using namespace std;

Salamander::Salamander() : WaterAnimal(defaultBeratBadan, tipe_makan), LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Salamander::~Salamander(){}
		
void Salamander::TampilKarakter(){
	cout << "K" << endl;
}
void Salamander::Bersuara(){
	cout << "Salll, I'm a salamander." << endl;
}
void Salamander::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Salamander::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
