// file Water.h

#include "cage.h"

#ifndef WATER_H
#define WATER_H

class Water : public Cage {
public:
	Water(int x,int y);
	~Water();
    char getChar();
    void printCage(int x,int y);
private:
	const int n_brs;
	const int n_kol;
	char water = 'w';
	char **cellwater;
	Matriks* cagewater;
	int x;
	int y;
};

#endif

