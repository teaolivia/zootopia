#ifndef	CROCODILE_H
#define CROCODILE_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2

class Crocodile : public LandAnimal, public WaterAnimal {
	public:
		Crocodile();
		~Crocodile();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
		void Berjalan(int lokasi);
		
	protected:
		
};
#endif
