//File "Peacock.h"

#ifndef	PEACOCK_H
#define PEACOCK_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

class Peacock : public FlyingAnimal, public LandAnimal {
	public:
		Peacock();
		Peacock(int bb);
		~Peacock();
		
		void TampilKarakter();
		void Bersuara();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
