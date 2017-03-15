//File "Panther.h"

#ifndef	PANTHER_H
#define PANTHER_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2000
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

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
