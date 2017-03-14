//File "Panther.h"

#ifndef	PANTHER_H
#define PANTHER_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2000
#define tipe_makan 'k'

/** @class Panther
     * Real class untuk hewan Panther.
     */

class Panther : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Panther.
         */
	    Panther();

	    /** @brief Destructor.
         */
	    ~Panther();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Panther ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Panther.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Panther.
         */
		void Berjalan(int lokasi);

	protected:

};
#endif
