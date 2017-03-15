//File "Elephant.h"

#ifndef	ELEPHANT_H
#define ELEPHANT_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 10000
<<<<<<< HEAD
#define tipe_makan 'h'
=======
#define default_jenis_makanan 'h'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

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
