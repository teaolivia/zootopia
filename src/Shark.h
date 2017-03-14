//File "Shark.h"

#ifndef	SHARK_H
#define SHARK_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 2000

class Shark : public WaterAnimal {
	public:
		Shark();
		~Shark();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
