//Animal.h


#ifndef ANIMAL_H
#define ANIMAL_H

#include "habitat.h"

class Animal {
	public:
	    //Animal();
		Animal(int bb); // ctor dengan param beratBadan
        ~Animal();
        //Animal(const Animal& a);

		//friend class Zoo;
		//friend class Cage<habitat>;

		int GetBeratBadan();
		//int GetPorsiMakan();
		virtual void TampilKarakter() = 0;
		virtual void Bersuara() = 0;
		//virtual void Bergerak() = 0;
		// bool isAmfibi();

		bool IsHabitat(char c);
		char GetHabitatAnimal(int i);

		// untuk mengecek liar apa tidaknya

		//virtual void Interract() = 0;
		static float GetNbMakanan();

	protected:
//		enum eatingType {
//			const carnivore;
//			const herbivore;
//			const omnivore;
//		 };
		const int BeratBadan;
		//const bool amfibi; //amfibi/tidak
		//lokasi cell
		static float NbMakanan;
		//lokasi cel--> friend class sama cage aja, ntr dipanggil di cage?
		Habitat habitat_animal;

};
#endif
