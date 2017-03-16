<<<<<<< HEAD
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




=======
// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


#include "Zoo.h"

Zoo::Zoo(int x, int y) : row(x), column(y){
		cell = new Cell *[row];
		for (int j=0; j<= row; j++) {
			cell[j] = new Cell [column];
			for (int i=0; i<= column; i++) {

			}
		}
} 

Zoo::Zoo(const Cell& c) : row (c.row), column (c.column) {
		int i,j;
		
		cell = new Cell *[row];
		for (i=0; i<=row; i++) {
		cell[i] = new Cell[column];
			for (j=0; j<=column; j++) {
				Cell *c = new Cell();
				cell[j] = c;
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

Zoo& Zoo::operator=(const Cell& c) {
		delete [] cell;
		cell = new Cell*[row];
		for (int i=0; i<row; i++) {
	        cell[i] = new Cell[column];
	        for (int j=0; j<column; j++) {
	            cell[i][j] = c;
	        }
		}
		return *this;
}

void Zoo::printZoo() {

}
>>>>>>> d4ebcfb6a02a2748a0b5ca90c0b216be036b538f
