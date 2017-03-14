//File "Parrot.h"

#ifndef	PARROT_H
#define PARROT_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2
<<<<<<< HEAD
#define tipe_makan 'o'
=======
#define default_jenis_makanan 'h'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

/** @class Parrot
     * Real class untuk hewan Parrot.
     */

class Parrot : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Parrot.
         */
	    Parrot();

	    /** @brief Destructor.
         */
	    ~Parrot();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Parrot ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Parrot.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Parrot.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Parrot.
		 */
        void Terbang(int lokasi);

	protected:

};
#endif
