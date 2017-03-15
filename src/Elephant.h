//File "Elephant.h"

#ifndef	ELEPHANT_H
#define ELEPHANT_H

#include "animal.h"
#include "land_animal.h"

#define defaultberat_badan 10000
#define tipe_makan 'h'
#define liar false
/** @class Elephant
     * Real class untuk hewan Elephant.
     */

class Elephant : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Elephant.
         * @param Lokasi hewan (absis).
         * @param Lokasi hewan (ordinat).
         */
	    Elephant(int x, int y);

	    /** @brief Destructor.
         */
	    ~Elephant();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Elephant ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Elephant.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Elephant.
         */
		void Berjalan();

	protected:

};
#endif
