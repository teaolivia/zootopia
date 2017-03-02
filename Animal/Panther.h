//File "Panther.h"

#ifndef	PANTHER_H
#define PANTHER_H

#include "Animal.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"

class Panther : public LandAnimal, public WaterAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Berjalan(int lokasi);
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
