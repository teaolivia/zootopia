<<<<<<< HEAD
#ifndef ZOO_H
#define ZOO_H

#include "cell.h"
#include <iostream>


class Zoo {
	public:
		// 5 sekawan
		Zoo(int column, int row);
		~Zoo();
		void SetZoo(int i, int j, Cell c);
		Cell GetCell(int i, int j);
		// methods

		//friend std::ostream& operator<<(std::ostream &os, const Matriks& m);
	private:
		const int column;
		const int row;
		int x,y;
		Cell** cell;
		const int NUM_OF_CAGE = 10;
};

#endif
=======
// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


#include <iostream>
#include "cell.h"
using namespace std;

class Zoo {
	public:
		// 5 sekawan
		Zoo(int column, int row);
		Zoo(const Cell& cell);
		~Zoo();
		Zoo& operator=(const Cell& c);
		// methods
		void printZoo();
	private:
		const int column;
		const int row;
		int x,y;
		Cell** cell;
		const int NUM_OF_CAGE = 10;
};
>>>>>>> d4ebcfb6a02a2748a0b5ca90c0b216be036b538f
