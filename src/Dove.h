//File "Dove.h"

#ifndef	DOVE_H
#define DOVE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3
#define default_jenis_makanan 'h'


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
