//File "Lion.h"

#ifndef	LION_H
#define LION_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 4000

class Lion : public LandAnimal {
	public:
		Lion();
		~Lion();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
