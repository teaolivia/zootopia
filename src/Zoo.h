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