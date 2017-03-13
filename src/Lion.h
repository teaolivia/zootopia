//File "Lion.h"

#ifndef	LION_H
#define LION_H

#include "Animal.h"
#include "LandAnimal.h"

class Lion : public LandAnimal {
	public:
		Lion();
		Lion(int bb);
		~Lion();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
