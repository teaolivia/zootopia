//File "Whale.h"

#ifndef	WHALE_H
#define WHALE_H

#include "Animal.h"
#include "WaterAnimal.h"

#define defaultBeratBadan 50000
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894

/** @class Whale
     * Real class untuk hewan Whale.
     */

class Whale : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Whale.
         */
	    Whale();

	    /** @brief Destructor.
         */
	    ~Whale();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Whale ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Whale.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Whale.
         */
		void Berenang(int lokasi);

	protected:
};
#endif
