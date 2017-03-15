#include "Land.h"

Land::Land() {
	cageland = new Matriks(x,y);
}

Land::~Land() {
	delete[] cageland;
}

void Land::printCage() {
	cout << land << endl;
}


