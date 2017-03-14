//File "Piranha.h"

#ifndef	PIRANHA_H
#define PIRANHA_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 1

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
