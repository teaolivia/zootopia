//File "Piranha.h"

#ifndef	PIRANHA_H
#define PIRANHA_H

#include "animal.h"
#include "water_animal.h"

#define defaultberat_badan 1
#define tipe_makan 'k'
#define liar true
/** @class Piranha
     * Real class untuk hewan Piranha.
     */

class Piranha : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Piranha.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Piranha(int x, int y);

	    /** @brief Destructor.
         */
	    ~Piranha();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Piranha ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Piranha.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Piranha.
         */
		void Berenang();

	protected:

};
#endif
