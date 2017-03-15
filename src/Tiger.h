//File "Tiger.h"

#ifndef	TIGER_H
#define TIGER_H

#include "animal.h"
#include "land_animal.h"

#define defaultberat_badan 2000
#define tipe_makan 'k'
#define liar true
/** @class Tiger
     * Real class untuk hewan Tiger.
     */

class Tiger : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Tiger.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Tiger(int x, int y);

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
		void Berjalan();

	protected:

};
#endif
