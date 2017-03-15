//File "Whale.cpp"

#include "Whale.h"
#include <iostream>

<<<<<<< HEAD
using namespace std;
=======
Whale::Whale() : WaterAnimal(defaultBeratBadan,default_jenis_makanan), Animal(defaultBeratBadan,default_jenis_makanan) {
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

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
