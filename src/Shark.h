//File "Shark.h"

#ifndef	SHARK_H
#define SHARK_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultberat_badan 2000
#define tipe_makan 'k'
#define liar true
/** @class Shark
     * Real class untuk hewan Shark.
     */

class Shark : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Shark.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Shark(int x, int y);

	    /** @brief Destructor.
         */
	    ~Shark();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Shark ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Shark.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Shark.
         */
		void Berenang();

	protected:

};
#endif
