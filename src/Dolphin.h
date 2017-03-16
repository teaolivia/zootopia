// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Dolphin.h"

#ifndef	DOLPHIN_H
#define DOLPHIN_H

#include "animal.h"
#include "water_animal.h"

#define defaultberat_badan 500
#define tipe_makan 'k'
#define liar false
/** @class Dolphin
     * Real class untuk hewan Dolphin.
     */

class Dolphin : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Dolphin.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Dolphin(int x, int y);

	    /** @brief Destructor.
         */
	    ~Dolphin();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Dolphin ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Dolphin.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Dolphin.
         */
		void Berenang();


	protected:

};
#endif
