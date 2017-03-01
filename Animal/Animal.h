//Animal.h


#ifndef ANIMAL_H
#define ANIMAL_H


class Animal {
	public:
		Animal();
		~Animal();

		virtual void TampilKarakter() = 0;
		virtual void Sound() = 0;
		virtual void Move() = 0;
		//virtual void Interract() = 0;
	
	protected:
		//tipe makanan
		//amfibi/tidak
		//lokasi cell
};
#endif
