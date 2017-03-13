//File "Peacock.cpp"

#include "Peacock.h"
#include <iostream>

using namespace std;

Peacock::Peacock() : Animal(1) {}
Peacock::Peacock(int bb) : Animal (BeratBadan) {}
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
