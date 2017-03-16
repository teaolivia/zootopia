#include "cell.h"
#include "Zoo.h"
#include <iostream>



Zoo::Zoo(int x, int y) : row(x), column(y){
		cell = new Cell *[row];
		for (int j=0; j<= row; j++) {
			cell[j] = new Cell [column];
			for (int i=0; i<= column; i++) {
				// c* = new Cell(c);
				// cell[i][j] = new Cell();
			}
		}
} 


Zoo::~Zoo() {
	//int i,j;
	for (int j=0; j<column; j++) {
		delete [] cell[j];
		for (int i=0; i<row; i++) 
			delete [] cell[i];	
	}
}

// std::ostream& operator<<(std::ostream &os, const Zoo& z) {
// 	os << "N = " << z.row << endl;
// 	os << "M = " << z.column << endl;
// 	int i, j;
// 	for (i=0; i<z.row; i++) {
// 		for (j=0; j<z.column-1; j++) {
// 			os << z.cell[i][j];
// 		}
// 		os << z.b[i][cell.column-1] << endl;
// 	}
// 	return os;
// }

void Zoo::SetZoo(int i, int j, Cell c) {
	cell[i][j] = c;
}

Cell Zoo::GetCell(int i, int j) {
	return cell[i][j];
}




