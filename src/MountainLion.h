//File "MountainLion.h"

#ifndef	MOUNTAINLION_H
#define MOUNTAINLION_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2000
#define default_jenis_makanan 'k'

/** @class MountainLion
     * Real class untuk hewan MountainLion.
     */

class MountainLion : public LandAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek MountainLion.
         */
	    MountainLion();

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
		void Berjalan(int lokasi);

	protected:

};
#endif

