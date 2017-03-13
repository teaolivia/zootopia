//File "Eagle.h"

#ifndef	EAGLE_H
#define EAGLE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3

class Eagle : public FlyingAnimal, public LandAnimal {
	public:
		Eagle();
		~Eagle();
		
		void TampilKarakter();
		void Bersuara();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
