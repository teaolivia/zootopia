//File "Rayfish.h"

#ifndef	RAYFISH_H
#define RAYFISH_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 1

class Rayfish : public WaterAnimal {
	public:
		Rayfish();
		~Rayfish();
		
		void TampilKarakter();
		void Bersuara();
		void Berenang(int lokasi);
	
	protected:
	
};
#endif
