#include "matriks.h"
#include <iostream>

class Matriks;

using namespace std;

    // ctor inisialisasi n_brs dan n_kol dengan ctor initialization list, N=M=defsize
    // Seluruh elemen matriks diinisialisasi dengan nilai 0
    Matriks::Matriks(): n_brs(DEFSIZE), n_kol(DEFSIZE) {
		cell = new char* [n_brs];
		for (int i=0; i<= n_brs; i++) {
			cell[i] = new char [n_kol];
			for (int j=0; j<= n_kol; j++) {
				cell[i][j] = 0;
			}
		}
    }

    // ctor dengan param n (banyaknya baris) dan m (banyaknya kolom)
    // Seluruh elemen matriks diinisialisasi dengan nilai 0
    Matriks::Matriks(int n, int m): n_brs(n), n_kol(n) {
		cell = new char* [n_brs];
		for (int i=0; i<= n_brs; i++) {
			cell[i] = new char [n_kol];
			for (int j=0; j<= n_kol; j++) {
				cell[i][j] = 0;
			}
		}
	}

    // cctor
    Matriks::Matriks(Matriks& m) : n_brs (m.n_brs), n_kol (m.n_kol) {
		int i,j;
		
		cell = new char *[n_brs];
		
		for (i=0; i<=n_brs; i++) {
			cell[i] = new char[n_kol];
			for (j=0; j<=n_kol; j++) {
				cell[j] = m.cell[j];
			}
		}
	}

    // dtor
    Matriks::~Matriks() {		
		for (int j=0; j<n_brs; j++) {
			delete [] cell[j];
			for (int i=0; i<n_brs; i++) 
				delete [] cell[i];	
		}
	}

    // operator= menjamin tidak bitwise copy.
    // dan dapat melakukan assignment m1=m2; prekondisi: ukuran m1=ukuran m2
    Matriks& Matriks::operator= (Matriks& m) {
		delete [] cell;
		cell = new char*[n_brs];
		for (int i=0; i<n_brs; i++) {
	        cell[i] = new char[n_kol];
	        for (int j=0; j<n_kol; j++) {
	            cell[i][j] = m.cell[i][j];
	        }
		}
		return *this;
	}

    // test apakah ukuran sama: true jika m1.n_brs== m2.n_brs && m1.n_kol== m2.n_kol
    bool IsEqSize (Matriks m1, Matriks m2) {
		return ((m1.n_brs == m2.n_brs)&&(m1.n_kol== m2.n_kol));
	}

    // menulis ukuran dan isi Matriks (lihat contoh
    std::ostream& operator<<(std::ostream &os, const Matriks& m) {
		int i,j;
		for(i=1; i<=m.n_brs; i++) {
			for(j=1; j<=m.n_kol; j++) {
				os << "" << endl;
			}
		}
		return os;
	}

    // isikan nilai v di posisi data[i,j], i dan j terdefinisi
    void Matriks::SetData (int i, int j, char v) {
		cell[i][j]=v;
	}

    // ambil elemen v di posisi data[i,j], i dan j terdefinisi
    char Matriks::GetData (int i, int j) {
		return cell[i][j];
	}

    // Mengembalikan n_brs
    int Matriks::GetBrs() {
		return n_brs;
	}
    // Mengembalikan n_kol
    int Matriks::GetKol() {
		return n_kol;
	}
