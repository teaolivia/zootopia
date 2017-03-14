//File "Whale.cpp"

#include "Whale.h"
#include <iostream>

using namespace std;

Whale::Whale() : WaterAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
Whale::~Whale(){}
		
void Whale::TampilKarakter(){
	cout << "X" << endl;
}
void Whale::Bersuara(){
	cout << "Lash, I'm a whale." << endl;
}
void Whale::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
