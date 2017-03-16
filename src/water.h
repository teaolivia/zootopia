// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091

// file Water.h

#include "cage.h"

#ifndef WATER_H
#define WATER_H

class Water : public Cage {
public:
	Water(int x,int y);
	~Water();
    char getChar();
    void printCage();
private:
	const int n_brs;
	const int n_kol;
	char water = 'w';
	Cell **cellwater;
	int x;
	int y;
};

#endif

