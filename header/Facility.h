#include <string>
#include <iostream>

using namespace std;

class Facility : public Cell {
	public:
		// 5 sekawan
		Facility();
		~Facility();
		// getter & setter
		int getArea(int area);
		
	private:
		int area;
};