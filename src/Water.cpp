#include "cage.h"
#include "Water.h"
#include <iostream>
using namespace std;

Water::Water() {
	cagewater = new Matriks(x,y);
}

Water::~Water() {
	delete[] cagewater;
}

char Water::getChar() {
	return water;
}

void Water::printCage(int x, int y) {
	cout << getChar() << endl;
}
