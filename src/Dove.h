//File "Dove.h"

#ifndef	DOVE_H
#define DOVE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

class Dove : public FlyingAnimal, public LandAnimal {
	public:
		Dove();
		Dove(int bb);
		~Dove();
		
		void TampilKarakter();
		void Bersuara();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
