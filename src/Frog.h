#ifndef	FROG_H
#define FROG_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1

class Frog : public LandAnimal, public WaterAnimal {
	public:
		Frog();
		~Frog();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
		void Berjalan(int lokasi);
		
	protected:
		
};
#endif
