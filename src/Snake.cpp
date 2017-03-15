//File "Snake.cpp"

#include "Snake.h"
#include <iostream>

using namespace std;

Snake::Snake(int x, int y) : WaterAnimal(defaultberat_badan, tipe_makan, liar,x,y), LandAnimal(defaultberat_badan, tipe_makan, liar,x,y), Animal(defaultberat_badan, tipe_makan, liar,x,y) {}

Snake::~Snake(){}

void Snake::TampilKarakter(){
	cout << "S" << endl;
}
void Snake::Bersuara(){
	cout << "Shhh, I'm a snake." << endl;
}
void Snake::Berenang(){
	//if tidak menembus batas
		Animal::Bergerak(3,-2);
}
void Snake::Berjalan(){
	//if tidak menembus batas
		Animal::Bergerak(2,1);
}
