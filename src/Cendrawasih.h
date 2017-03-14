//File "Cendrawasih.h"

#ifndef	CENDRAWASIH_H
#define CENDRAWASIH_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 3


/** @class Cendrawasih
     * Real class untuk hewan Cendrawasih.
     */

class Cendrawasih : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Cendrawasih.
         */
	    Cendrawasih();

	    /** @brief Destructor.
         */
	    ~Cendrawasih();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Cendrawasih ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Cendrawasih.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Cendrawasih.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Cendrawasih.
		 */
        void Terbang(int lokasi);

	protected:

};
#endif
