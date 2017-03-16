#include "animal.h"
#include "cell.h"
#include "water.h"
#include "air.h"
#include "land.h"
#include "zoo.h"

#include <iostream>
using namespace std;

int main() {

	Zoo z(5,5);
	cout << "zoo created." << endl;

	Land l;
	cout << "land created." << endl;

	z.SetZoo(0,0,l);
	cout << "zoo set." << endl;

	cout << "char: " << z.GetCell(0,0).GetChar() << endl;

	return 0;
}