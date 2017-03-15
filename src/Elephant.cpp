//File "Elephant.cpp"

#include "Elephant.h"
#include <iostream>

using namespace std;

Elephant::Elephant() : LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {
Elephant::~Elephant(){}
		
void Elephant::TampilKarakter(){
	cout << "L" << endl;
}
void Elephant::Bersuara(){
	cout << "Humphhh, I'm an elephant." << endl;
}
void Elephant::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
