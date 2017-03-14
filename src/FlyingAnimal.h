//File "FlyingAnimal.h"

#ifndef	FLYINGANIMAL_H
#define FLYINGANIMAL_H

#include "Animal.h"

class FlyingAnimal : public virtual Animal {
	public:
		FlyingAnimal(int bb);
		~FlyingAnimal();

		void Terbang();

		virtual void TampilKarakter() = 0;
		virtual void Bersuara() = 0;


	protected:
   	    const char JenisHabitat = 'a';


};
#endif
