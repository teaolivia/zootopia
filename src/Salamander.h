#ifndef	SALAMANDER_H
#define SALAMANDER_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1
#define tipe_makan 'k'


/** @class Salamander
     * Real class untuk hewan Salamander.
     */

class Salamander : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Salamander.
         */
	    Salamander();

	    /** @brief Destructor.
         */
	    ~Salamander();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Salamander ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Salamander.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Salamander.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Salamander.
		 */
        void Berenang(int lokasi);

	protected:

};
#endif
