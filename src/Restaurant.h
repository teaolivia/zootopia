// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091

#include <iostream>

#ifndef RESTAURANT_H
#define RESTAURANT_H

using namespace std;

class Restaurant : Public Cell {
	public:
	Restaurant();
	~Restaurant();
	private:
		char rest = '$';
};
#endif