//File "MountainLion.cpp"

#include "MountainLion.h"
#include <iostream>

using namespace std;

MountainLion::MountainLion() : Animal(1) {}
MountainLion::MountainLion(int bb) : Animal (BeratBadan) {}
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
