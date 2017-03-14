#ifndef	FROG_H
#define FROG_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894


/** @class Frog
     * Real class untuk hewan Frog.
     */

class Frog : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Frog.
         */
	    Frog();

	    /** @brief Destructor.
         */
	    ~Frog();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Frog ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Frog.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Frog.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Frog.
		 */
        void Berenang(int lokasi);

	protected:

};
#endif
