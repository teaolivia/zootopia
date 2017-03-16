// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091

// File Air.h

#include "cage.h"

#ifndef AIR_H
#define AIR_H

class Air : public Cage {
public:
    Air();
    ~Air();
    void printCage(int x, int y);
private:
	const char air = 'a';
	Matriks* cageair;
};

#endif

