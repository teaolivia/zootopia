//File "Lion.h"

#ifndef	LION_H
#define LION_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 4000
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

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

