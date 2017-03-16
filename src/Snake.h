// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

#ifndef	SNAKE_H
#define SNAKE_H

#include "animal.h"
#include "water_animal.h"
#include "land_animal.h"

#define defaultberat_badan 1
#define tipe_makan 'k'
#define liar true

/** @class Snake
     * Real class untuk hewan Snake.
     */

class Snake : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Snake.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Snake(int x, int y);

	    /** @brief Destructor.
         */
	    ~Snake();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Snake ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Snake.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Snake.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Snake.
		 */
        void Berenang();

	protected:

};
#endif
