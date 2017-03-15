//File "Eagle.h"

#ifndef	EAGLE_H
#define EAGLE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894


/** @class Eagle
     * Real class untuk hewan Eagle.
     */

class Eagle : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Eagle.
         */
	    Eagle();

	    /** @brief Destructor.
         */
	    ~Eagle();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Eagle ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Eagle.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Eagle.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Eagle.
		 */
        void Terbang(int lokasi);

	protected:

};
#endif
