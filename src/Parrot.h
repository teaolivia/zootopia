// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Parrot.h"

#ifndef	PARROT_H
#define PARROT_H

#include "animal.h"
#include "flying_animal.h"
#include "land_animal.h"

#define defaultberat_badan 2
#define tipe_makan 'o'
#define liar false
/** @class Parrot
     * Real class untuk hewan Parrot.
     */

class Parrot : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Parrot.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Parrot(int x, int y);

	    /** @brief Destructor.
         */
	    ~Parrot();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Parrot ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Parrot.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Parrot.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Parrot.
		 */
        void Terbang();

	protected:

};
#endif
