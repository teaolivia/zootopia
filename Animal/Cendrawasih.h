//File "Cendrawasih.h"

#ifndef	CENDRAWASIH_H
#define CENDRAWASIH_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

class Cendrawasih : public FlyingAnimal, public LandAnimal {
	public:
		//void TampilKarakter();
		//void Bersuara();
		//void Bergerak();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
