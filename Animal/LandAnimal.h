//File "LandAnimal.h"

#ifndef	LANDANIMAL_H
#define LANDANIMAL_H

#include "Animal.h"

class LandAnimal : public Animal {
	public:
		LandAnimal();
		~LandAnimal();
		
		virtual void Walk() = 0;
		
	
	protected:
	
};
#endif
