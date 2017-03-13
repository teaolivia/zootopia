#ifndef	SALAMANDER_H
#define SALAMANDER_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1

class Salamander : public LandAnimal, public WaterAnimal {
	public:
		Salamander();
		~Salamander();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
		void Berjalan(int lokasi);
		
	protected:
		
};
#endif
