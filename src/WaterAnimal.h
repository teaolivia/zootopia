//File "WaterAnimal.h"

#ifndef	WATERANIMAL_H
#define WATERANIMAL_H

#include "Animal.h"

class WaterAnimal : public Animal {
	public:
		WaterAnimal();
		~WaterAnimal();

		virtual void Berenang() = 0;

	protected:

};
#endif
