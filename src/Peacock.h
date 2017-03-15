//File "Peacock.h"

#ifndef	PEACOCK_H
#define PEACOCK_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3
<<<<<<< HEAD
#define tipe_makan 'o'
=======
#define default_jenis_makanan 'h'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

/** @class Peacock
     * Real class untuk hewan Peacock.
     */

class Peacock : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Peacock.
         */
	    Peacock();

	    /** @brief Destructor.
         */
	    ~Peacock();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Peacock ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Peacock.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Peacock.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Peacock.
		 */
        void Terbang(int lokasi);

	protected:

};
#endif
