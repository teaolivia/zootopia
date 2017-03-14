//File "Snake.cpp"

#include "Snake.h"
#include <iostream>

using namespace std;

Snake::Snake() : WaterAnimal(defaultBeratBadan, tipe_makan), LandAnimal(defaultBeratBadan, tipe_makan), Animal(defaultBeratBadan, tipe_makan) {}
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
