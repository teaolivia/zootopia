//File "Tiger.h"

#ifndef	TIGER_H
#define TIGER_H

#include "Animal.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"

class Tiger : public LandAnimal, public WaterAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Berjalan(int lokasi);
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
