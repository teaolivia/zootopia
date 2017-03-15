#ifndef	CROCODILE_H
#define CROCODILE_H

#include "animal.h"
#include "water_animal.h"
#include "land_animal.h"

#define defaultberat_badan 2
#define tipe_makan 'k'
#define liar true
/** @class Crocodile
     * Real class untuk hewan Crocodile.
     */

class Crocodile : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Crocodile.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Crocodile(int x, int y);

	    /** @brief Destructor.
         */
	    ~Crocodile();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Crocodile ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Crocodile.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Crocodile.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Crocodile.
		 */
        void Berenang();

	protected:

};
#endif
