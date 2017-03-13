//File "Whale.cpp"

#include "Whale.h"
#include <iostream>

using namespace std;

Whale::Whale() : WaterAnimal(defaultBeratBadan) {}
Whale::~Whale(){}
		
void Whale::TampilKarakter(){
	cout << "W" << endl;
}
void Whale::Bersuara(){
	cout << "Whoo, I'm a whale." << endl;
}
void Whale::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
