//Animal.h


#ifndef ANIMAL_H
#define ANIMAL_H


class Animal {
	public:
		Animal(); // ctor
		Animal(int bb, bool amf); // ctor dengan param beratBadan dan isAmfibi
        ~Animal();

		//friend class Zoo;
		//friend class Cage<habitat>;

		int getberatBadan();
		virtual void TampilKarakter() = 0;
		virtual void Sound() = 0;
		virtual void Move() = 0;
		bool isAmfibi();

		// untuk mengecek liar apa tidaknya

		//virtual void Interract() = 0;
		static int GetNbMakanan();

	protected:
//		enum eatingType {
//			const carnivore;
//			const herbivore;
//			const omnivore;
//		 };
		const int beratBadan;
		const bool amfibi; //amfibi/tidak
		//lokasi cell
		static int NbMakanan;
		//lokasi cel--> friend class sama cage aja, ntr dipanggil di cage?

};
#endif
