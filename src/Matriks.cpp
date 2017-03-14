#include "matriks.h"
#include <iostream>

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
    Matriks::Matriks(Matriks& m) {
		int i,j;
		
		n_brs = m.n_brs;
		n_kol = m.n_kol;
		cell = new char [n_brs][n_kol];
		
		for (i=0; i<=n_brs; i++) {
			cell[i] = m.cell[i];
			for (j=0; j<=n_kol; j++) {
				cell[j] = m.cell[j];
			}
		}
	}

    // dtor
    Matriks::~Matriks() {
		delete [][] cell;
		n_brs = 0;
		n_kol = 0;
	}

    // operator= menjamin tidak bitwise copy.
    // dan dapat melakukan assignment m1=m2; prekondisi: ukuran m1=ukuran m2
    Matriks& Matriks::operator= (Matriks& m) {
		Matriks& m1,m2;
		int i,j;
		
		delete [][] cell;
		
		cell= new char [n_brs][n_kol];
		
		if (IsEqSize(m1,m2)) {
			m1.n_brs = m2.n_brs;
			m1.n_kol = m2.n_kol;
			for (i=0; i<=n_brs; i++) {
				for (j=0; j<=n_kol; j++) {
						m1.cell= m2.cell;
				}
			}
		} else {
			n_brs = m.n_brs;
			n_kol = m.n_kol;
			
			for (i=0; i<=n_brs; i++) {
				for (j=0; j<=n_kol; j++) {
						cell= m.cell;
				}
			}	
		}		
		return *this;
	}

    // test apakah ukuran sama: true jika m1.n_brs== m2.n_brs && m1.n_kol== m2.n_kol
    friend bool Matriks::IsEqSize (Matriks m1, Matriks m2) {
		return ((m1.n_brs == m2.n_brs)&&(m1.n_kol== m2.n_kol));
	}

    // operator+ penjumlahan nilai celldari kedua matriksyg posisinya sama
    // Mhasil(i,j) = M1 (i,j) + M2(i,j)
    // Proses : jika ukuran m2 tak sama dengan current object,
    // yang tak beririsan tidak dijumlahkan, hanya dicopy
    // hasilnya adalah matriks yang lebih besar
    // ditulis sebagai function member
    Matriks& Matriks::operator+ (Matriks m2) {
		Matriks& mhasil
		int i,j;
		mhasil.i = m1.i + m2.i;
		mhasil.j = m1.j + m2.j;		
	}

    // operator* untuk melakukan perkalian thd setiap nilai cellyang posisinya sama
    // Mhasil(i,j) = M1 (i,j) * M2(i,j)
    // jika matriks ukurannya tak sama, yang tak beririsan tak dikalikan
    // hasilnya adalah matriks yang lebih besar ukurannya
    // Ditulis sebagai friend function
    friend Matriks& Matriks::operator* (const Matriks& m1, const Matriks& m2) {
		Matriks& mhasil
		int i,j;
		mhasil.i = m1.i * m2.i;
		mhasil.j = m1.j * m2.j;
		return *this;
	}

    // menulis ukuran dan isi Matriks (lihat contoh
    friend std::ostream& Matriks::operator<<(std::ostream &os, const Matriks& m) {
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
		Matriks(i,j)=v;
	}

    // ambil elemen v di posisi data[i,j], i dan j terdefinisi
    char Matriks::GetData (int i, int j) {
		return Matriks(i,j);
	}

    // Mengembalikan n_brs
    int Matriks::GetBrs() {
		return n_brs;
	}
    // Mengembalikan n_kol
    int Matriks::GetKol() {
		return n_kol;
	}
