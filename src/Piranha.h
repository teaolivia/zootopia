//File "Piranha.h"

#ifndef	PIRANHA_H
#define PIRANHA_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 1
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

/** @class Piranha
     * Real class untuk hewan Piranha.
     */

class Piranha : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Piranha.
         */
	    Piranha();

	    /** @brief Destructor.
         */
	    ~Piranha();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Piranha ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Piranha.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Piranha.
         */
		void Berenang(int lokasi);

	protected:

};
#endif
