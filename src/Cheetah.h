//File "Cheetah.h"

#ifndef	CHEETAH_H
#define CHEETAH_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1000
#define tipe_makan 'k'

/** @class Cheetah
     * Real class untuk hewan Cheetah.
     */

class Cheetah : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Cheetah.
         */
	    Cheetah();

	    /** @brief Destructor.
         */
	    ~Cheetah();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Cheetah ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Cheetah.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Cheetah.
         */
		void Berjalan(int lokasi);

	protected:

};
#endif
