//File "Dove.h"

#ifndef	DOVE_H
#define DOVE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3
<<<<<<< HEAD
#define tipe_makan 'o'
=======
#define default_jenis_makanan 'h'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894


/** @class Dove
     * Real class untuk hewan Dove.
     */

class Dove : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Dove.
         */
	    Dove();

	    /** @brief Destructor.
         */
	    ~Dove();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Dove ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Dove.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Dove.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Dove.
		 */
        void Terbang(int lokasi);

	protected:

};
#endif
