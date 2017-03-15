#include "air.h"

Air::Air() {
	cageair = new Matriks(x,y);
}

Air::~Air() {
	delete [] cageair;
}

void Air::printCage() {
	cout << air << endl;
}
