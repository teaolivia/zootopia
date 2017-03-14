#include <iostream>

using namespace std;

class Matriks;
class Zoo;

class Cell {
	public:
    friend class Zoo;
    friend class Matriks;
    //getter setter
    char GetCell();
  
	protected:
	const char char_cell = 'c';

		//Road<> road;
    // location
};