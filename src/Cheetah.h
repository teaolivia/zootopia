//File "Cheetah.h"

#ifndef	CHEETAH_H
#define CHEETAH_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1000
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

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
