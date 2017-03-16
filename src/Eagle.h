// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Eagle.h"

#ifndef	EAGLE_H
#define EAGLE_H

#include "animal.h"
#include "flying_animal.h"
#include "land_animal.h"

#define defaultberat_badan 3
#define tipe_makan 'k'
#define liar true

/** @class Eagle
     * Real class untuk hewan Eagle.
     */

class Eagle : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Eagle.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Eagle(int x, int y);

	    /** @brief Destructor.
         */
	    ~Eagle();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Eagle ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Eagle.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Eagle.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Eagle.
		 */
        void Terbang();

	protected:

};
#endif
