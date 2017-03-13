//File "Dolphin.h"

#ifndef	DOLPHIN_H
#define DOLPHIN_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 500

class Dolphin : public WaterAnimal {
	public:
		Dolphin();
		~Dolphin();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
