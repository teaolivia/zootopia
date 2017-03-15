//File "Dove.cpp"

#include "Dove.h"
#include <iostream>

using namespace std;

Dove::Dove() : FlyingAnimal(defaultBeratBadan, tipe_makan), LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Dove::~Dove(){}
		
void Dove::TampilKarakter(){
	cout << "D" << endl;
}
void Dove::Bersuara(){
	cout << "Ove, ove, ove, I'm a dove." << endl;
}
void Dove::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Dove::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
