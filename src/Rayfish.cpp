//File "Rayfish.cpp"

#include "Rayfish.h"
#include <iostream>

using namespace std;

Rayfish::Rayfish() : WaterAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Rayfish::~Rayfish(){}
		
void Rayfish::TampilKarakter(){
	cout << "X" << endl;
}
void Rayfish::Bersuara(){
	cout << "Lash, I'm a rayfish." << endl;
}
void Rayfish::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
