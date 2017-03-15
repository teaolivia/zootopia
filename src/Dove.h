//File "Dove.h"

#ifndef	DOVE_H
#define DOVE_H

#include "Animal.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"

#define defaultberat_badan 3
#define tipe_makan 'o'
#define liar false

/** @class Dove
     * Real class untuk hewan Dove.
     */

class Dove : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Dove.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Dove(int x, int y);

	    /** @brief Destructor.
         */
	    ~Dove();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Dove ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Dove.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Dove.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Dove.
		 */
        void Terbang();

	protected:

};
#endif
