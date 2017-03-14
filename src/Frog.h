#ifndef	FROG_H
#define FROG_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1
#define tipe_makan 'k'


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
