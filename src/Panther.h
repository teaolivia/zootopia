//File "Panther.h"

#ifndef	PANTHER_H
#define PANTHER_H

#include "Animal.h"
#include "LandAnimal.h"

class Panther : public LandAnimal {
	public:
		Panther();
		Panther(int bb);
		~Panther();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
