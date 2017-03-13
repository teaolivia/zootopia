//File "Dove.h"

#ifndef	DOVE_H
#define DOVE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3

class Dove : public FlyingAnimal, public LandAnimal {
	public:
		Dove();
		~Dove();
		
		void TampilKarakter();
		void Bersuara();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
