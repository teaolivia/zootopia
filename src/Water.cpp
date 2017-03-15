#include "cage.h"
#include "water.h"
#include <iostream>
using namespace std;


Water::Water(int x, int y) : n_brs(x), n_kol(y), Cage(x,y) {
	cellwater = new Cell* [n_kol];
		for (int j=0; j<= n_brs; j++) {
			cellwater[j] = new Cell[n_brs];
			for (int i=0; i<= n_kol; i++) {
				//cellwater[i][j] = getChar();
			}
		}
}

Water::~Water() {
	for (int j=0; j<n_kol; j++) {
		delete [] cell[j];
		for (int i=0; i<n_brs; i++) 
			delete [] cell[i];	
	}
}

char Water::getChar() {
	return water;
}

void Water::printCage() {

	// for (int i = 1; i < this->n_brs; i++)
 //    {
 //        for (int j = 1; j < this->n_kol; ++j)
 //        {
            
 //        }
 //        cout << endl;
 //    }

}