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
