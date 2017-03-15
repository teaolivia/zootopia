//File "Panther.cpp"

#include "Panther.h"
#include <iostream>

using namespace std;

Panther::Panther() : LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Panther::~Panther(){}
		
void Panther::TampilKarakter(){
	cout << "R" << endl;
}
void Panther::Bersuara(){
	cout << "Rrr, I'm a panther." << endl;
}
void Panther::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
