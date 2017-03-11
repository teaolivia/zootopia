//File "Whale.h"

#ifndef	WHALE_H
#define WHALE_H

#include "Animal.h"
#include "WaterAnimal.h"

class Whale : public WaterAnimal {
	public:
	    Whale();
	    Whale(int bb);
	    ~Whale();
		void TampilKarakter();
		void Bersuara();
		//void Bergerak();
		//void Berenang(int lokasi);
		void Berenang();

	protected:

};
#endif
