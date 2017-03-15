#include "cage.h"
#include <iostream>

using namespace std;
// template <class habitat>
// int Cage<habitat>::countCell = 0;

// Cage::Cage() : c() {
// 	// bikin matriks di sini
// 	c = new Matriks();
// }

Cage::Cage(int x, int y) : n_brs(x), n_kol(y) {
	// matriks dengan parameter
	cell = new char *[n_brs];
		for (int i=0; i<= n_brs; i++) {
			cell[i] = new char [n_kol];
			for (int j=0; j<= n_kol; j++) {
				cell[i][j] = getChar();
			}
		}
}

// Cage::~Cage() {
// 	// tes
// 	c.~Matriks();
// }

char Cage::getChar() {
}

void Cage::printCage(int x,int y) {
		
}
// template <class habitat>
// void printCage(int x,int y) {

// }


