// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//File "water_animal.h"

#ifndef	WATERANIMAL_H
#define WATERANIMAL_H

#include "animal.h"

/** @class WaterAnimal
     * Kelas untuk hewan yang habitatnya di air. Turunan dari kelas Animal.
     */
class WaterAnimal : public virtual Animal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu hewan yang habitatnya di air.
         * @param bb Nilai berat badan untuk hewan yang ingin diciptakan.
         * @param jm Karakter jenis makanan untuk hewan yang ingin diciptakan.
         * @param il Pemeriksaan apakah hewan termasuk liar.
         * @param x Lokasi hewan (absis).
         * @param y Lokasi hewan (ordinat).
         */
		WaterAnimal(int bb, char jm, bool il, int x, int y);

		/** @brief Destructor.
         */
		~WaterAnimal();

		/** @brief Menampilkan pergerakan hewan.
         */
		void Berenang();

		/** @brief Menampilkan karakter hewan ke layar.
         */
		virtual void TampilKarakter() = 0;

		/** @brief Menampilkan interaksi berupa suara hewan.
         */
		virtual void Bersuara() = 0;

	protected:
	    const char JenisHabitat = 'w';

};
#endif
