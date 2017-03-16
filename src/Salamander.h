// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

#ifndef	SALAMANDER_H
#define SALAMANDER_H

#include "animal.h"
#include "water_animal.h"
#include "land_animal.h"

#define defaultberat_badan 1
#define tipe_makan 'k'
#define liar false

/** @class Salamander
     * Real class untuk hewan Salamander.
     */

class Salamander : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Salamander.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Salamander(int x, int y);

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
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Salamander.
		 */
        void Berenang();

	protected:

};
#endif
