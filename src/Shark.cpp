//File "Shark.cpp"

#include "Shark.h"
#include <iostream>

using namespace std;

Shark::Shark() : WaterAnimal(defaultBeratBadan) {}
Shark::~Shark(){}
		
void Shark::TampilKarakter(){
	cout << "Y" << endl;
}
void Shark::Bersuara(){
	cout << "Shoo, I'm a shark." << endl;
}
void Shark::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
