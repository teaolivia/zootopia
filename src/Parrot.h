//File "Parrot.h"

#ifndef	PARROT_H
#define PARROT_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2
#define tipe_makan 'o'

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
