//File "Peacock.h"

#ifndef	PEACOCK_H
#define PEACOCK_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3

class Peacock : public FlyingAnimal, public LandAnimal {
	public:
		Peacock();
		~Peacock();
		
		void TampilKarakter();
		void Bersuara();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
