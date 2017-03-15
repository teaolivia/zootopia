//File "Panther.h"

#ifndef	PANTHER_H
#define PANTHER_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultberat_badan 2000
#define tipe_makan 'k'
#define liar true
/** @class Panther
     * Real class untuk hewan Panther.
     */

class Panther : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Panther.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Panther(int x, int y);

	    /** @brief Destructor.
         */
	    ~Panther();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Panther ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Panther.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Panther.
         */
		void Berjalan();

	protected:

};
#endif
