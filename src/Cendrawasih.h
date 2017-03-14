//File "Cendrawasih.h"

#ifndef	CENDRAWASIH_H
#define CENDRAWASIH_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3

class Cendrawasih : public FlyingAnimal, public LandAnimal {
	public:
		Cendrawasih();
		~Cendrawasih();

		void TampilKarakter();
		void Bersuara();
		void Terbang(int lokasi);
		void Berjalan(int lokasi);
		char GetJenisMakanan(); //

	protected:
		
};
#endif
