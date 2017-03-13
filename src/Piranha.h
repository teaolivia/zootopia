//File "Piranha.h"

#ifndef	PIRANHA_H
#define PIRANHA_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 1

class Piranha : public WaterAnimal {
	public:
		Piranha();
		~Piranha();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
