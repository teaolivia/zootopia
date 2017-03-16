// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


#include "air.h"

Air::Air() {
	cageair = new Matriks(x,y);
}

Air::~Air() {
	delete cageair;
}

void Air::printCage() {
	cout << air << endl;
}
