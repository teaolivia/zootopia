//File "Elephant.h"

#ifndef	ELEPHANT_H
#define ELEPHANT_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 10000
#define default_jenis_makanan 'h'

/** @class Elephant
     * Real class untuk hewan Elephant.
     */

class Elephant : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Elephant.
         */
	    Elephant();

	    /** @brief Destructor.
         */
	    ~Elephant();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Elephant ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Elephant.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Elephant.
         */
		void Berjalan(int lokasi);

	protected:

};
#endif
