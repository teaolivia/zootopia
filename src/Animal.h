//Animal.h


#ifndef ANIMAL_H
#define ANIMAL_H

#include "habitat.h"
#include <string> //

/** @class Animal
     * Abstract base class untuk semua hewan.
     */

class Animal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu hewan.
         * @param bb Nilai berat badan untuk hewan yang ingin diciptakan.
         * @param jm Karakter jenis makanan untuk hewan yang ingin diciptakan.
         */
		Animal(int bb, char jm);

        /** @brief Destructor.
         */
        ~Animal();

		//friend class Zoo;
		//friend class Cage<habitat>;
        /** @brief Mengembalikan berat badan hewan.
         */
		int GetBeratBadan();

		//int GetPorsiMakan();
		/** @brief Menampilkan karakter hewan ke layar.
         */
		virtual void TampilKarakter() = 0;

		/** @brief Menampilkan interaksi berupa suara hewan.
         */
		virtual void Bersuara() = 0;

		/** @brief Memeriksa apakah habitat yang dimasukkan dimiliki oleh hewan.
         * @param c Karakter habitat yang ingin diperiksa.
         */
		bool IsHabitat(char c);

		/** @brief Mengembalikan habitat yang dimiliki oleh hewan.
         * @param i Nilai indeks dari array habitat yang ingin dikembalikan.
         */
		char GetHabitatAnimal(int i);

		// untuk mengecek liar apa tidaknya

		//virtual void Interract() = 0;
		/** @brief Mengembalikan jumlah makanan yang diperlukan oleh seluruh hewan yang pernah diciptakan.
         */
		static float GetNbMakanan();

	protected:
		//enum jenis_makanan { carnivore, herbivore, omnivore };
		const int BeratBadan;
		//lokasi cell
		static float NbSayur;
		static float NbDaging;
		//lokasi cel--> friend class sama cage aja, ntr dipanggil di cage?
		Habitat habitat_animal;
		const char jenis_makanan;

};
#endif
