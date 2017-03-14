//File "Rayfish.h"

#ifndef	RAYFISH_H
#define RAYFISH_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 1
#define default_jenis_makanan 'k'

/** @class Rayfish
     * Real class untuk hewan Rayfish.
     */

class Rayfish : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Rayfish.
         */
	    Rayfish();

	    /** @brief Destructor.
         */
	    ~Rayfish();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Rayfish ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Rayfish.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Rayfish.
         */
		void Berenang(int lokasi);
	protected:

};
#endif
