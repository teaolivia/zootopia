//File "Crocodile.cpp"

#include "Crocodile.h"
#include <iostream>

using namespace std;

Crocodile::Crocodile() : WaterAnimal(defaultBeratBadan, tipe_makan), LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Crocodile::~Crocodile(){}
		
void Crocodile::TampilKarakter(){
	cout << "O" << endl;
}
void Crocodile::Bersuara(){
	cout << "Srak, I'm a crocodile." << endl;
}
void Crocodile::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Crocodile::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
