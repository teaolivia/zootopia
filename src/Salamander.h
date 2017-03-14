#ifndef	SALAMANDER_H
#define SALAMANDER_H

#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"

#define defaultBeratBadan 1
<<<<<<< HEAD
#define tipe_makan 'k'
=======
#define default_jenis_makanan 'k'
>>>>>>> da3158a40bebe7615f451e88707f661f213ca894


/** @class Salamander
     * Real class untuk hewan Salamander.
     */

class Salamander : public LandAnimal, public WaterAnimal {
	public:
	    /** @brief Constructor.
         * Menciptakan suatu objek Salamander.
         */
	    Salamander();

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
		void Berjalan(int lokasi);

		/** @brief Mengimplementasikan method untuk bergerak bagi Salamander.
		 */
        void Berenang(int lokasi);

	protected:

};
#endif
