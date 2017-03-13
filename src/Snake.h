#ifndef	SNAKE_H
#define SNAKE_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1

class Snake : public LandAnimal, public WaterAnimal {
	public:
		Snake();
		~Snake();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
		void Berjalan(int lokasi);
		
	protected:
		
};
#endif
