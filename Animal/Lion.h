//File "Lion.h"

#ifndef	LION_H
#define LION_H

#include "Animal.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"

class Lion : public LandAnimal, public WaterAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Berjalan(int lokasi);
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
