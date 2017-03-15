//File "Dolphin.h"

#ifndef	DOLPHIN_H
#define DOLPHIN_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 500
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

/** @class Dolphin
     * Real class untuk hewan Dolphin.
     */

class Dolphin : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Dolphin.
         */
	    Dolphin();

	    /** @brief Destructor.
         */
	    ~Dolphin();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Dolphin ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Dolphin.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Dolphin.
         */
		void Berenang();


	protected:

};
#endif
