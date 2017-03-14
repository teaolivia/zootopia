//File "MountainLion.cpp"

#include "MountainLion.h"
#include <iostream>

using namespace std;

MountainLion::MountainLion() : LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
MountainLion::~MountainLion(){}
		
void MountainLion::TampilKarakter(){
	cout << "M" << endl;
}
void MountainLion::Bersuara(){
	cout << "M, grrr, I'm a mountain lion." << endl;
}
void MountainLion::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
