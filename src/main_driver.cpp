// Pembuat:
// Thea Olivia - 13511001

#include "animal.h"
#include "zoo.h"
#include "matriks.h"
#include "Cheetah.h"
#include "cage.h"

#include <iostream>
using namespace std;


int main() {
	Zoo *z = new Zoo(6,16);
	Cage *c = new Land();
	Animal *a_cheetah = new Cheetah(2,2);

	//Cheetah a_cheetah(2,2);
	cout << "Selamat datang di Zootopia <3" << endl;
	cout << "Selamat menjelajah <3" << endl;
	
	return 0;
}