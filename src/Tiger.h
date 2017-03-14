//File "Tiger.h"

#ifndef	TIGER_H
#define TIGER_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2000

/** @class Tiger
     * Real class untuk hewan Tiger.
     */

class Tiger : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Tiger.
         */
	    Tiger();

	    /** @brief Destructor.
         */
	    ~Tiger();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Tiger ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Tiger.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Tiger.
         */
		void Berjalan(int lokasi);

	protected:

};
#endif
