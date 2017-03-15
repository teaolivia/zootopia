//File "land_animal.h"

#ifndef	LANDANIMAL_H
#define LANDANIMAL_H

#include "animal.h"

/** @class LandAnimal
     * Kelas untuk hewan yang habitatnya di darat. Turunan dari kelas Animal.
     */

class LandAnimal : public virtual Animal {
	public:
		/** @brief Constructor.
         * Menciptakan suatu hewan yang habitatnya di darat.
         * @param bb Nilai berat badan untuk hewan yang ingin diciptakan.
         * @param jm Karakter jenis makanan untuk hewan yang ingin diciptakan.
         * @param il Pemeriksaan apakah hewan termasuk liar.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
		LandAnimal(int bb, char jm, bool il, int x, int y);

		/** @brief Destructor.
         */
		~LandAnimal();

		/** @brief Menampilkan pergerakan hewan.
         */
		void Berjalan();

		/** @brief Menampilkan karakter hewan ke layar.
         */
        virtual void TampilKarakter() = 0;

        /** @brief Menampilkan interaksi berupa suara hewan.
         */
		virtual void Bersuara() = 0;

	protected:
	    const char JenisHabitat = 'l';

};
#endif
