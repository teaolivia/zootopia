//File "LandAnimal.h"

#ifndef	LANDANIMAL_H
#define LANDANIMAL_H

#include "Animal.h"

class LandAnimal : public virtual Animal {
	public:
		LandAnimal(int bb, char jm);
		~LandAnimal();

		void Berjalan();

        virtual void TampilKarakter() = 0;
		virtual void Bersuara() = 0;


	protected:
	    const char JenisHabitat = 'l';

};
#endif
