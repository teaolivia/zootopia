#ifndef	SNAKE_H
#define SNAKE_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1
#define default_jenis_makanan 'k'


/** @class Snake
     * Real class untuk hewan Snake.
     */

class Snake : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Snake.
         */
	    Snake();

	    /** @brief Destructor.
         */
	    ~Snake();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Snake ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Snake.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Snake.
         */
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Snake.
		 */
        void Berenang(int lokasi);

	protected:

};
#endif
