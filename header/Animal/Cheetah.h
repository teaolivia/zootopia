//File "Cheetah.h"

#ifndef	CHEETAH_H
#define CHEETAH_H

#include "Animal.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"

class Cheetah : public LandAnimal, public WaterAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Berjalan(int lokasi);
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
