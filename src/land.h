// file Land.h

#include "cage.h"

#ifndef LAND_H
#define LAND_H

class Land : public Cage {
public:
    Land(int x, int y);
    ~Land();
    char getChar();
    void printCage();
private:
	const char land = 'l';
	Matriks *cageland;
};

#endif
