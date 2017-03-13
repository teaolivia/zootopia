//File "Peacock.cpp"

#include "Peacock.h"
#include <iostream>

using namespace std;

Peacock::Peacock() : FlyingAnimal(defaultBeratBadan), LandAnimal(defaultBeratBadan) {}
Peacock::~Peacock(){}
		
void Peacock::TampilKarakter(){
	cout << "P" << endl;
}
void Peacock::Bersuara(){
	cout << "Cock, cock, cock, I'm a peacock." << endl;
}
void Peacock::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Peacock::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
