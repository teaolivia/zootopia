#include <iostream>

using namespace std;

class Zoo {
	public:
		// 5 sekawan
		Zoo();
		Zoo(int column, int row, Cell );
		Zoo(const Cell& );
		~Zoo();
		Zoo& op=(const Cell& );
		// methods
		void printZoo();
	private:
		const int column = ;
		const int row;
		Cell* cell;
		const int NUM_OF_CAGE = 10;
};