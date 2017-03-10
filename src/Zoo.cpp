#include "Zoo.h"

// 5 sekawan
Zoo::Zoo() {
	cell -> new Cell*[row];
	for (int i=0; i<row; i++) {
		cell[i] -> new Cell*[column];
		for (int j=0; j<column; j++){
			cell[i][j]=;
		}
	}
}

Zoo::Zoo(int column, int row, Cell cell) {

}

Zoo::Zoo(const Cell& cell) {

}

Zoo::~Zoo() {
	delete [][] cell;
	column = 0;
	row = 0;
}

Zoo& Zoo::op=(const Cell& cell) {

}

void Zoo::printZoo() {

}