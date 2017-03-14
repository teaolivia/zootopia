//File "Tiger.cpp"

#include "Tiger.h"
#include <iostream>

using namespace std;

Tiger::Tiger() : LandAnimal(defaultBeratBadan,default_jenis_makanan) {}
Tiger::~Tiger(){}

void Tiger::TampilKarakter(){
	cout << "T" << endl;
}
void Tiger::Bersuara(){
	cout << "Grrr, I'm a tiger." << endl;
}
void Tiger::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
