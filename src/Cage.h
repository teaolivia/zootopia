#ifndef CAGE_H
#define CAGE_H

#include <iostream>
#include "Animal.h"
// #include "Land.h"
// #include "Water.h"
// #include "Air.h"
//#include "habitat.h"

/** @class Cage
  * Kelas yang menciptakan cage dengan ukuran tertentu
  */
class Cage {
	public:
		Cage();
        Cage(int x,int y);
		~Cage();
        virtual char getChar();
		virtual void printCage(int x,int y);

	protected:
		Animal* animal;
    	// Habitat
    	
    	int x;
    	int y;
}; 

#endif