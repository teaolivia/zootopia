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
	int x = 6;
	int y = 16;
	const char visitor = 'x';
	char ch;
	char control;
	const char up = 'w';
	int input = 0;
	Cell *blank = new Cell(' ');
	Zoo *z = new Zoo(x,y);
	//z->SetPath(1,16,blank);
	// Animal *a_cheetah = new Cheetah(2,2);

	//Cheetah a_cheetah(2,2);
	cout << "Selamat datang di Zootopia <3" << endl;
	cout << "Selamat menjelajah <3" << endl;
	cout << "----------------------------------" << endl;

	cout << "char: " << z->GetCell(0,0).GetChar() << endl;

	// while (input != 2)
	// {
	// 	switch (input)
	// 	{
	// 		case 1:
	// 			// Display Virtual Zoo
	// 			z->SetZoo(i,j,c);
	// 			break;
	// 		case 2:
	// 			// tour virtual zoo
				
	// 				if(control==up){
	// 					for (int p=1; p<=y; p++)
	// 					z->SetZoo(1,p++,visitor);
	// 				}
				
	// 	}
	// }
	
	return 0;
}