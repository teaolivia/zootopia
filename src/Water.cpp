#include "cage.h"
#include "Water.h"
#include <iostream>
using namespace std;

Water::Water() {
cout << "asd";
}

Water::~Water() {
	
}

char Water::getChar() {
	return water;
}

void Water::printCage(int x, int y) {
	cout << getChar() << endl;
}
