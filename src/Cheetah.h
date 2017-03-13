//File "Cheetah.h"

#ifndef	CHEETAH_H
#define CHEETAH_H

#include "Animal.h"
#include "LandAnimal.h"

class Cheetah : public LandAnimal {
	public:
		Cheetah();
		Cheetah(int bb);
		~Cheetah();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
