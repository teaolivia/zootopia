//File "Cheetah.cpp"

#include "Cheetah.h"
#include <iostream>

using namespace std;

Cheetah::Cheetah() : Animal(1) {}
Cheetah::Cheetah(int bb) : Animal (BeratBadan) {}
Cheetah::~Cheetah(){}
		
void Cheetah::TampilKarakter(){
	cout << "H" << endl;
}
void Cheetah::Bersuara(){
	cout << "Tah, I'm a cheetah." << endl;
}
void Cheetah::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
