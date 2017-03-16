// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091

#ifndef CELL_H
#define CELL_H

#include <iostream>

class Matriks;
class Zoo;
/** @class Cell
  * Kelas yang mengandung member sebagai isi cell
  */
class Cell {
	public:
    //friend class Zoo;
    //friend class Cage;
    //getter setter

	bool isEmpty();
  	char getSymbol();

		//Road<> road;
    // location
	public:
		int column;
		int row;
};
#endif