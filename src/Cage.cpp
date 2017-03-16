// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


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
	cell = new Cell *[n_kol];
		for (int j=0; j<= n_kol; j++) {
			cell[j] = new Cell [n_brs];
			for (int i=0; i<= n_brs; i++) {
//				cell[i][j] = getChar();
			}
		}
}

Cage::~Cage() {
	//int i,j;
	for (int j=0; j<n_kol; j++) {
		delete [] cell[j];
		for (int i=0; i<n_brs; i++) 
			delete [] cell[i];	
	}
}

char Cage::Render() {
  return "C";
}

void Cage::printCage() {
		
}
// template <class habitat>
// void printCage(int x,int y) {

// }


