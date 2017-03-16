#include <iostream>

using namespace std;

class Park : public Cell {
	public:
		Park();
		~Park();
	private:
		char park = '#';
};