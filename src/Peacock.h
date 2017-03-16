// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Peacock.h"

#ifndef	PEACOCK_H
#define PEACOCK_H

#include "animal.h"
#include "flying_animal.h"
#include "land_animal.h"

#define defaultberat_badan 3
#define tipe_makan 'o'
#define liar false
/** @class Peacock
     * Real class untuk hewan Peacock.
     */

class Peacock : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Peacock.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Peacock(int x, int y);

	    /** @brief Destructor.
         */
	    ~Peacock();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Peacock ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Peacock.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Peacock.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Peacock.
		 */
        void Terbang();

	protected:

};
#endif
