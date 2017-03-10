//Animal.h


#ifndef ANIMAL_H
#define ANIMAL_H


class Animal {
	public:
		Animal();
		~Animal();

		friend class Zoo;
		friend class Cage<habitat>;

		virtual int getberatBadan() = 0;
		virtual void TampilKarakter() = 0;
		virtual void Sound() = 0;
		virtual void Move() = 0;
		virtual bool isAmphibi() = 0;

		// untuk mengecek liar apa tidaknya

		//virtual void Interract() = 0;
		static int GetNbMakanan();

	protected:
		enum eatingType {
			const carnivore;
			const herbivore;
			const omnivore;
		 };
		int beratBadan;
		//amfibi/tidak
		//lokasi cell
		static int NbMakanan();
		//lokasi cel--> friend class sama cage aja, ntr dipanggil di cage?

};
#endif
