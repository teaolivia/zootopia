//File "Elephant.h"

#ifndef	ELEPHANT_H
#define ELEPHANT_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 10000

class Elephant : public LandAnimal {
	public:
		Elephant();
		~Elephant();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
