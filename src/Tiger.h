//File "Tiger.h"

#ifndef	TIGER_H
#define TIGER_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2

class Tiger : public LandAnimal {
	public:
		Tiger();
		~Tiger();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
