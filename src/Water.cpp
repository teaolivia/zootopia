#include "cage.h"
#include "water.h"
#include <iostream>
using namespace std;


Water::Water(int x, int y) : n_brs(x), n_kol(y), Cage(x,y) {
	cellwater = new char* [n_brs];
		for (int i=0; i<= n_brs; i++) {
			cellwater[i] = new char [n_kol];
			for (int j=0; j<= n_kol; j++) {
				cellwater[i][j] = getChar();
			}
		}
}

Water::~Water() {

}

char Water::getChar() {
	return water;
}

void Water::printCage(int x, int y) {

	for (int i = 1; i < this->n_brs; i++)
    {
        for (int j = 1; j < this->n_kol; ++j)
        {
            cout << cellwater[i][j] << ' ';
        }
        cout << endl;
    }

}

int main() {
	
	return 0;
}