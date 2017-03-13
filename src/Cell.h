#include <iostream>

using namespace std;

class Cell {
	public:
    friend class Zoo;
    // cek agar semua elemen di zoo tidak tabrakan
    virtual bool CollisionCheck() = 0;
  
	protected:
		// generik

		//Road<> road;
    // location
    int x;
    int y;
};