//File "MountainLion.h"

#ifndef	MOUNTAINLION_H
#define MOUNTAINLION_H

#include "Animal.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"

class MountainLion : public LandAnimal, public WaterAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Berjalan(int lokasi);
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
