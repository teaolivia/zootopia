#include <iostream>

using namespace std;

class Zoo() {
	public:
		// 5 sekawan
		Zoo();
		Zoo(Cell cell);
		Zoo(Cell&);
		~Zoo();
		Zoo& op=();
		// methods
		void createZoo();
		void printZoo();
		
	private:
		Cell cell;
		Animal animal;
};