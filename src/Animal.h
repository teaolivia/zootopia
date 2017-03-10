//Animal.h


#ifndef ANIMAL_H
#define ANIMAL_H


class Animal {
	public:
		Animal();
		~Animal();

		friend class Zoo;

		virtual void TampilKarakter() = 0;
		virtual void Sound() = 0;
		virtual void Move() = 0;
		//virtual void Interract() = 0;
		static int GetNbMakanan();

	protected:
		//tipe makanan
		//amfibi/tidak
		//lokasi cell
		static int NbMakanan();
};
#endif
