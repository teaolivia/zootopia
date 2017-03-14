//File "Whale.h"

#ifndef	WHALE_H
#define WHALE_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 50000

/** @class Whale
     * Real class untuk hewan Whale.
     */

class Whale : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Whale.
         */
	    Whale();

	    /** @brief Destructor.
         */
	    ~Whale();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Whale ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Whale.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Whale.
         */
		void Berenang();

	protected:
};
#endif
