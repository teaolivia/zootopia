//File "Shark.h"

#ifndef	SHARK_H
#define SHARK_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 2000
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

/** @class Shark
     * Real class untuk hewan Shark.
     */

class Shark : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Shark.
         */
	    Shark();

	    /** @brief Destructor.
         */
	    ~Shark();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Shark ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Shark.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Shark.
         */
		void Berenang(int lokasi);

	protected:

};
#endif
