//File "Dove.cpp"

#include "Dove.h"
#include <iostream>

using namespace std;

Dove::Dove() : Animal(1) {}
Dove::Dove(int bb) : Animal (BeratBadan) {}
Dove::~Dove(){}
		
void Dove::TampilKarakter(){
	cout << "D" << endl;
}
void Dove::Bersuara(){
	cout << "Ove, ove, ove, I'm a dove." << endl;
}
void Dove::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Dove::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
