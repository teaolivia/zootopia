#ifndef	CROCODILE_H
#define CROCODILE_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'

>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

/** @class Crocodile
     * Real class untuk hewan Crocodile.
     */

class Crocodile : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Crocodile.
         */
	    Crocodile();

	    /** @brief Destructor.
         */
	    ~Crocodile();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Crocodile ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Crocodile.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Crocodile.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Crocodile.
		 */
        void Berenang(int lokasi);

	protected:

};
#endif
