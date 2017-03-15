//File "MountainLion.h"

#ifndef	MOUNTAINLION_H
#define MOUNTAINLION_H

#include "animal.h"
#include "land_animal.h"

#define defaultberat_badan 2000
#define tipe_makan 'k'
#define liar true
/** @class MountainLion
     * Real class untuk hewan MountainLion.
     */

class MountainLion : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek MountainLion.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    MountainLion(int x, int y);

	    /** @brief Destructor.
         */
	    ~MountainLion();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter MountainLion ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara MountainLion.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi MountainLion.
         */
		void Berjalan();

	protected:

};
#endif

