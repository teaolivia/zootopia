//File "Cendrawasih.cpp"

#include "Cendrawasih.h"
#include <iostream>

using namespace std;

<<<<<<< HEAD
Cendrawasih::Cendrawasih() : FlyingAnimal(defaultBeratBadan), LandAnimal(defaultBeratBadan), Animal(defaultBeratBadan) {}

=======
Cendrawasih::Cendrawasih() : FlyingAnimal(defaultBeratBadan), LandAnimal(defaultBeratBadan), Animal(defaultBeratBadan) {
	//jenis_makanan jm = herbivore; //
	jenis_makanan[0] = 'h';
	jenis_makanan[1] = '\0';
}
>>>>>>> 7b3921dd16eeb6a4d0c8a8bc25e9ee5633733d22
Cendrawasih::~Cendrawasih(){}

void Cendrawasih::TampilKarakter(){
	cout << "C" << endl;
}

void Cendrawasih::Bersuara(){
	cout << "See, see, see, I'm a cendrawasih." << endl;
}
void Cendrawasih::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Cendrawasih::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
char Cendrawasih::GetJenisMakanan(){ //
	return jenis_makanan[0];//
} //
