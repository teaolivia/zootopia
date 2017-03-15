//File "Whale.h"

#ifndef	WHALE_H
#define WHALE_H

#include "animal.h"
#include "water_animal.h"

#define defaultberat_badan 50000
#define tipe_makan 'k'
#define liar true
/** @class Whale
     * Real class untuk hewan Whale.
     */

class Whale : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Whale.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Whale(int x, int y);

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
