// file Air.h

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
};

#endif

