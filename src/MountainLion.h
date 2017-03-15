//File "MountainLion.h"

#ifndef	MOUNTAINLION_H
#define MOUNTAINLION_H

#include "Animal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 2000
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

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

