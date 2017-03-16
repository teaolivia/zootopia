// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

#include "Cheetah.h"
#include "animal.h"
#include "land_animal.h"

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
