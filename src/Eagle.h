//File "Eagle.h"

#ifndef	EAGLE_H
#define EAGLE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

class Eagle : public FlyingAnimal, public LandAnimal {
	public:
		Eagle();
		Eagle(int bb);
		~Eagle();
		
		void TampilKarakter();
		void Bersuara();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
