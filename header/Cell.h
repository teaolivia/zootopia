#include <iostream>
//#include "Road.h"

using namespace std;

class Cell {
	public:
	friend class Zoo;
	friend char getCell();

	protected:
		// generik
		//Road<> road;
		char cell = 'c';
};