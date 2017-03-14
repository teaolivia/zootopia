//File "Shark.h"

#ifndef	SHARK_H
#define SHARK_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 2000

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
