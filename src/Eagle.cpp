//File "Eagle.cpp"

#include "Eagle.h"
#include <iostream>

using namespace std;

Eagle::Eagle() : FlyingAnimal(defaultBeratBadan, tipe_makan), LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Eagle::~Eagle(){}
		
void Eagle::TampilKarakter(){
	cout << "E" << endl;
}
void Eagle::Bersuara(){
	cout << "Girl, girl, girl, I'm an eagle." << endl;
}
void Eagle::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Eagle::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
