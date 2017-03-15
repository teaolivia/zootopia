#ifndef MATRIKS_H
#define MATRIKS_H
#define DEFSIZE 100
#define nil NULL

#include <iostream>
class Matriks;

class Matriks {
  public:
    // ctor inisialisasi n_brs dan n_kol dengan ctor initialization list, N=M=defsize
    // Seluruh elemen matriks diinisialisasi dengan nilai 0
    Matriks();

    // ctor dengan param n (banyaknya baris) dan m (banyaknya kolom)
    // Seluruh elemen matriks diinisialisasi dengan nilai 0
    Matriks(int n, int m);

    // cctor
    Matriks(Matriks& m);

    // dtor
    ~Matriks();

    // operator= menjamin tidak bitwise copy.
    // dan dapat melakukan assignment m1=m2; prekondisi: ukuran m1=ukuran m2
    Matriks& operator= (Matriks& m);

    // test apakah ukuran sama: true jika m1.n_brs== m2.n_brs && m1.n_kol== m2.n_kol
    friend bool IsEqSize (Matriks m1, Matriks m2);

    // menulis ukuran dan isi Matriks (lihat contoh
    friend std::ostream& operator<<(std::ostream &os, const Matriks& m);

    // isikan nilai v di posisi data[i,j], i dan j terdefinisi
    void SetData (int i, int j, char v);

    // ambil elemen v di posisi data[i,j], i dan j terdefinisi
    char GetData (int i, int j);

    // Mengembalikan n_brs
    int GetBrs();
    // Mengembalikan n_kol
    int GetKol();

  private:
    const int n_brs; // Banyaknya baris, n_brs > 0
    const int n_kol; // Banyaknya kolom, n_kol > 0
    // int i;
    // int j;
    char ** cell; // Elemen matriks
};

#endif
