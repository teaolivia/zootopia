// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Cheetah.h"

#ifndef	CHEETAH_H
#define CHEETAH_H

#include "animal.h"
#include "land_animal.h"

#define defaultberat_badan 1000
#define tipe_makan 'k'
#define liar true

/** @class Cheetah
     * Real class untuk hewan Cheetah.
     */

class Cheetah : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Cheetah.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Cheetah(int x, int y);

	    /** @brief Destructor.
         */
	    ~Cheetah();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Cheetah ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Cheetah.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Cheetah.
         */
		void Berjalan();

	protected:

};
#endif
