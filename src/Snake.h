#ifndef	SNAKE_H
#define SNAKE_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894


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
