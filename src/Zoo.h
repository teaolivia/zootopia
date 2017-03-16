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