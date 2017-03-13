//File "WaterAnimal.h"

#ifndef	WATERANIMAL_H
#define WATERANIMAL_H

#include "Animal.h"

class WaterAnimal : public Animal {
	public:
		WaterAnimal(int bb);
		~WaterAnimal();

		virtual void Berenang() = 0;

		virtual void TampilKarakter() = 0;
		virtual void Bersuara() = 0;

	protected:
	    const char JenisHabitat = 'w';

};
#endif
