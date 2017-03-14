// file Land.h

#include "cage.h"

#ifndef LAND_H
#define LAND_H

class Land : public Cage {
public:
    Land();
    ~Land();
    void printCage();
private:
	const char land = 'l';
};

#endif
