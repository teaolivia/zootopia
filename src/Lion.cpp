//File "Lion.cpp"

#include "Lion.h"
#include <iostream>

using namespace std;

Lion::Lion() : LandAnimal(defaultBeratBadan) {}
Lion::~Lion(){}
		
void Lion::TampilKarakter(){
	cout << "N" << endl;
}
void Lion::Bersuara(){
	cout << "Roar, I'm a lion." << endl;
}
void Lion::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
