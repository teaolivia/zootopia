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
		void createZoo();
		void printZoo();
	private:
		int column;
		int row;
		Cell* cell;
};