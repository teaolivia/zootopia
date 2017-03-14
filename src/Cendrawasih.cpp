//File "Cendrawasih.cpp"

#include "Cendrawasih.h"
#include <iostream>

using namespace std;

Cendrawasih::Cendrawasih() : FlyingAnimal(defaultBeratBadan), LandAnimal(defaultBeratBadan), Animal(defaultBeratBadan) {}

Cendrawasih::~Cendrawasih(){}

void Cendrawasih::TampilKarakter(){
	cout << "C" << endl;
}

void Cendrawasih::Bersuara(){
	cout << "See, see, see, I'm a cendrawasih." << endl;
}
void Cendrawasih::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Cendrawasih::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
