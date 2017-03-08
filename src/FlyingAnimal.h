//File "FlyingAnimal.h"

#ifndef	FLYINGANIMAL_H
#define FLYINGANIMAL_H

#include "Animal.h"

class FlyingAnimal : public Animal {
	public:
		FlyingAnimal();
		~FlyingAnimal();
		
		virtual void Fly() = 0;
		
	
	protected:
	
};
#endif
