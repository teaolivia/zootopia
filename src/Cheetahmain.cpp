#include "Cheetah.h"
#include "Animal.h"
#include "LandAnimal.h"

#include <iostream>
using namespace std;

int main() {
	//Animal *c = new Cheetah(2,3);
	Cheetah c(2,3);

	c.Berjalan();

	cout << "x: " << c.GetLokasi(0) << endl;
	cout << "y: " << c.GetLokasi(1) << endl;

	return 0;
}