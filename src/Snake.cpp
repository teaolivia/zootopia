//File "Snake.cpp"

#include "Snake.h"
#include <iostream>

using namespace std;

<<<<<<< HEAD
Snake::Snake() : WaterAnimal(defaultBeratBadan, tipe_makan), LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
=======
Snake::Snake() : WaterAnimal(defaultBeratBadan,default_jenis_makanan), LandAnimal(defaultBeratBadan,default_jenis_makanan) {}
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894
Snake::~Snake(){}

void Snake::TampilKarakter(){
	cout << "S" << endl;
}
void Snake::Bersuara(){
	cout << "Shhh, I'm a snake." << endl;
}
void Snake::Berenang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Snake::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
