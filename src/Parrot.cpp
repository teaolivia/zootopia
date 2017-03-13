//File "Parrot.cpp"

#include "Parrot.h"
#include <iostream>

using namespace std;

Parrot::Parrot() : FlyingAnimal(defaultBeratBadan), LandAnimal(defaultBeratBadan) {}
Parrot::~Parrot(){}
		
void Parrot::TampilKarakter(){
	cout << "A" << endl;
}
void Parrot::Bersuara(){
	cout << "Rot, rot, rot, I'm a parrot." << endl;
}
void Parrot::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Parrot::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
