//File "flying_animal.h"

#ifndef	FLYINGANIMAL_H
#define FLYINGANIMAL_H

#include "animal.h"

/** @class FlyingAnimal
     * Kelas untuk hewan yang habitatnya di udara. Turunan dari kelas Animal.
     */

class FlyingAnimal : public virtual Animal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu hewan yang habitatnya di udara.
         * @param bb Nilai berat badan untuk hewan yang ingin diciptakan.
         * @param jm Karakter jenis makanan untuk hewan yang ingin diciptakan.
         * @param il Pemeriksaan apakah hewan termasuk liar.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
		FlyingAnimal(int bb, char jm, bool il, int x, int y);

		/** @brief Destructor.
         */
		~FlyingAnimal();

		/** @brief Menampilkan pergerakan hewan.
         */
		void Terbang();

		/** @brief Menampilkan karakter hewan ke layar.
         */
		virtual void TampilKarakter() = 0;

		/** @brief Menampilkan interaksi berupa suara hewan.
         */
		virtual void Bersuara() = 0;


	protected:
   	    const char JenisHabitat = 'a';


};
#endif
