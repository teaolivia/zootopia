#ifndef	CROCODILE_H
#define CROCODILE_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

class Shark : public WaterAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Berenang(int lokasi);
		void Berjalan(int lokasi);
	protected:
		
};
#endif