//File "Lion.h"

#ifndef	LION_H
#define LION_H

#include "animal.h"
#include "land_animal.h"

#define defaultberat_badan 4000
#define tipe_makan 'k'
#define liar true
/** @class Lion
     * Real class untuk hewan Lion.
     */

class Lion : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Lion.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Lion(int x, int y);

	    /** @brief Destructor.
         */
	    ~Lion();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Lion ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Lion.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Lion.
         */
		void Berjalan();

	protected:

};
#endif

