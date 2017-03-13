//File "MountainLion.h"

#ifndef	MOUNTAINLION_H
#define MOUNTAINLION_H

#include "Animal.h"
#include "LandAnimal.h"

class MountainLion : public LandAnimal {
	public:
		MountainLion();
		MountainLion(int bb);
		~MountainLion();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
