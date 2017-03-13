#include <iostream>
#ifndef MATRIX_H
#define MATRIX_H
using namespace std;

class Matrix {
	public:
		Matrix();
		Matrix(int column, int row);
		Matrix(const Matrix& );
		~Matrix();
		Matrix& operator=(const Matrix& );

		virtual void printMatrix(Matrix M) = 0;

	private:
		int column;
		int row;

};

#endif