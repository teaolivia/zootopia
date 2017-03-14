//File "Lion.h"

#ifndef	LION_H
#define LION_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 4000

/** @class Lion
     * Real class untuk hewan Lion.
     */

class Lion : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Lion.
         */
	    Lion();

	    /** @brief Destructor.
         */
	    ~Lion();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Lion ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Lion.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Lion.
         */
		void Berjalan(int lokasi);

	protected:

};
#endif

