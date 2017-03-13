//File "WaterAnimal.h"

#ifndef	WATERANIMAL_H
#define WATERANIMAL_H

#include "Animal.h"
#include "Water.h"

class WaterAnimal : public Animal {
	public:
		WaterAnimal(int bb);
		~WaterAnimal();

		char GetJenisHabitat();

		virtual void Berenang() = 0;

		virtual void TampilKarakter() = 0;
		virtual void Bersuara() = 0;

	protected:
	    Water *w;

};
#endif
