//File "MountainLion.cpp"

#include "MountainLion.h"
#include <iostream>

using namespace std;

MountainLion::MountainLion(int x, int y) : LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}
MountainLion::~MountainLion(){}

void MountainLion::TampilKarakter(){
	cout << "M" << endl;
}
void MountainLion::Bersuara(){
	cout << "M, grrr, I'm a mountain lion." << endl;
}
void MountainLion::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(2,3);
}
