// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Rayfish.h"

#ifndef	RAYFISH_H
#define RAYFISH_H

#include "animal.h"
#include "water_animal.h"

#define defaultberat_badan 1
#define tipe_makan 'k'
#define liar false
/** @class Rayfish
     * Real class untuk hewan Rayfish.
     */

class Rayfish : public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Rayfish.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Rayfish(int x, int y);

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
		void Berenang();
	protected:

};
#endif
