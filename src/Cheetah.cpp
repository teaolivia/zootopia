//File "Cheetah.cpp"

#include "Cheetah.h"
#include <iostream>

using namespace std;

Cheetah::Cheetah() : LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}

Cheetah::~Cheetah(){}
		
void Cheetah::TampilKarakter(){
	cout << "H" << endl;
}
void Cheetah::Bersuara(){
	cout << "Tah, I'm a cheetah." << endl;
}
void Cheetah::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
