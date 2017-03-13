//File "Cheetah.h"

#ifndef	CHEETAH_H
#define CHEETAH_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1000

class Cheetah : public LandAnimal {
	public:
		Cheetah();
		~Cheetah();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
