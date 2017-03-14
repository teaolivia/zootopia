//File "WaterAnimal.h"

#ifndef	WATERANIMAL_H
#define WATERANIMAL_H

#include "Animal.h"

/** @class WaterAnimal
     * Kelas untuk hewan yang habitatnya di air. Turunan dari kelas Animal.
     */
class WaterAnimal : public virtual Animal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu hewan yang habitatnya di air.
         * @param bb Nilai berat badan untuk hewan yang ingin diciptakan.
         * @param jm Karakter jenis makanan untuk hewan yang ingin diciptakan.
         */
		WaterAnimal(int bb, char jm);

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
