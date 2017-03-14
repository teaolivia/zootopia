//File "Frog.cpp"

#include "Frog.h"
#include <iostream>

using namespace std;

Frog::Frog() : WaterAnimal(defaultBeratBadan, tipe_makan), LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Frog::~Frog(){}
		
void Frog::TampilKarakter(){
	cout << "F" << endl;
}
void Frog::Bersuara(){
	cout << "Crock, I'm a frog." << endl;
}
void Frog::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Frog::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
