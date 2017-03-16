// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

#ifndef	FROG_H
#define FROG_H

#include "animal.h"
#include "water_animal.h"
#include "land_animal.h"

#define defaultberat_badan 1
#define tipe_makan 'k'
#define liar false

/** @class Frog
     * Real class untuk hewan Frog.
     */

class Frog : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Frog.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Frog(int x, int y);

	    /** @brief Destructor.
         */
	    ~Frog();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Frog ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Frog.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Frog.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Frog.
		 */
        void Berenang();

	protected:

};
#endif
