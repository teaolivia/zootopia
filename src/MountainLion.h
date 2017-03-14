//File "MountainLion.h"

#ifndef	MOUNTAINLION_H
#define MOUNTAINLION_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2000

class MountainLion : public LandAnimal {
	public:
		MountainLion();
		~MountainLion();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
