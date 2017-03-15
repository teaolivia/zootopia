#include "cage.h"
#include <iostream>

using namespace std;
// template <class habitat>
// int Cage<habitat>::countCell = 0;

Cage::Cage() : cage() {
	// bikin matriks di sini
	cage = new Matriks();
}

Cage::Cage(int x, int y) {
	// matriks dengan parameter
	cage = new Matriks(x,y);
}

Cage::~Cage() {
	// tes
	delete[] cage;
}

char Cage::getChar() {

}

void Cage::printCage(int x,int y) {
	//cout << "Tes"<<endl;

}


// template <class habitat>
// void printCage(int x,int y) {

// }


