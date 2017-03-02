//File "Parrot.h"

#ifndef	PARROT_H
#define PARROT_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

class Parrot : public FlyingAnimal, public LandAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
