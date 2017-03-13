//File "Cendrawasih.cpp"

#include "Cendrawasih.h"
#include <iostream>

using namespace std;

Cendrawasih::Cendrawasih() : Animal(1) {}
Cendrawasih::Cendrawasih(int bb) : Animal (BeratBadan) {}
Cendrawasih::~Cendrawasih(){}
		
void Cendrawasih::TampilKarakter(){
	cout << "C" << endl;
}
void Cendrawasih::Bersuara(){
	cout << "Sea, sea, sea, I'm a cendrawasih." << endl;
}
void Cendrawasih::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Cendrawasih::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
