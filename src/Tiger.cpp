//File "Tiger.cpp"

#include "Tiger.h"
#include <iostream>

using namespace std;

<<<<<<< HEAD
Tiger::Tiger() : LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
=======
Tiger::Tiger() : LandAnimal(defaultBeratBadan,default_jenis_makanan) {}
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894
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
