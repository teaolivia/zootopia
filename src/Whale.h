//File "Whale.h"

#ifndef	WHALE_H
#define WHALE_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 50000

class Whale : public WaterAnimal {
	public:
	    Whale();
	    ~Whale();
	    
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);

	protected:
};
#endif
