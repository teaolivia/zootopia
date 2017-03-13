//File "Tiger.h"

#ifndef	TIGER_H
#define TIGER_H

#include "Animal.h"
#include "LandAnimal.h"

class Tiger : public LandAnimal {
	public:
		Tiger();
		Tiger(int bb);
		~Tiger();
		
		void TampilKarakter();
		void Bersuara();
		void Berjalan(int lokasi);
	
	protected:
	
};
#endif
