//File "Dolphin.h"

#ifndef	DOLPHIN_H
#define DOLPHIN_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 500
#define tipe_makan 'k'

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
