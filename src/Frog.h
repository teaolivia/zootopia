#ifndef	FROG_H
#define FROG_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

class Frog : public LandAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Berenang(int lokasi);
		void Berjalan(int lokasi);
	protected:
		
};
#endif