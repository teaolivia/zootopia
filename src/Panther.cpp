//File "Panther.cpp"

#include "Panther.h"
#include <iostream>

using namespace std;

Panther::Panther() : Animal(1) {}
Panther::Panther(int bb) : Animal (BeratBadan) {}
Panther::~Panther(){}
		
void Panther::TampilKarakter(){
	cout << "R" << endl;
}
void Panther::Bersuara(){
	cout << "Rrr, I'm a panther." << endl;
}
void Panther::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
