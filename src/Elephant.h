//File "Elephant.h"

#ifndef	ELEPHANT_H
#define ELEPHANT_H

#include "Animal.h"
#include "LandAnimal.h"

class Elephant : public LandAnimal {
	public:
		Elephant();
		Elephant(int bb);
		~Elephant();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
