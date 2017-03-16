// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


#ifndef CAGE_H
#define CAGE_H

#include <iostream>
#include "matriks.h"
// #include "Land.h"
// #include "Water.h"
// #include "Air.h"
//#include "habitat.h"
#include "cell.h"

/** @class Cage
  * Kelas yang menciptakan cage dengan ukuran tertentu
  */
class Cage {
	public:
        /** @class Cage
          * Kelas yang menciptakan cage dengan ukuran tertentu
          */
		~Cage();
        /** @class Cage
          * Kelas yang menciptakan cage dengan ukuran tertentu
          */
        Cage(int x,int y);
        /** @class Cage
          * Kelas yang menciptakan cage dengan ukuran tertentu
          */
        virtual char getChar();
        /** @class Cage
          * Kelas yang menciptakan cage dengan ukuran tertentu
          */
		virtual void printCage();

        // virtual void insertAnimal();

	protected:
    	// Habitat
        const int n_brs;
        const int n_kol;
        Cell **cell;
    	int x;
    	int y;
}; 

#endif