// file Water.h

#include "cage.h"

#ifndef WATER_H
#define WATER_H

class Water : public Cage {
public:
	Water();
	~Water();
    char getChar();
    void printCage(int x, int y);
private:
	char water = 'w';
	Matriks* cagewater;
};

#endif

