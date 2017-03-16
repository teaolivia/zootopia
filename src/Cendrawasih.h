// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "Cendrawasih.h"

#ifndef	CENDRAWASIH_H
#define CENDRAWASIH_H

#include "animal.h"
#include "flying_animal.h"
#include "land_animal.h"

#define defaultberat_badan 3
#define tipe_makan 'o'
#define liar false


/** @class Cendrawasih
     * Real class untuk hewan Cendrawasih.
     */

class Cendrawasih : public LandAnimal, public FlyingAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Cendrawasih.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
	    Cendrawasih(int x, int y);

	    /** @brief Destructor.
         */
	    ~Cendrawasih();

	    /** @brief Mengimplementasikan method untuk menampilkan karakter Cendrawasih ke layar.
         */
		void TampilKarakter();

		/** @brief Mengimplementasikan method untuk menampilkan interaksi berupa suara Cendrawasih.
         */
		void Bersuara();

		/** @brief Mengimplementasikan method untuk bergerak bagi Cendrawasih.
         */
		void Berjalan();

		/** @brief Mengimplementasikan method untuk bergerak bagi Cendrawasih.
		 */
        void Terbang();

	protected:

};
#endif
