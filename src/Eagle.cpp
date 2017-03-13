//File "Eagle.cpp"

#include "Eagle.h"
#include <iostream>

using namespace std;

Eagle::Eagle() : Animal(1) {}
Eagle::Eagle(int bb) : Animal (BeratBadan) {}
Eagle::~Eagle(){}
		
void Eagle::TampilKarakter(){
	cout << "E" << endl;
}
void Eagle::Bersuara(){
	cout << "Girl, girl, girl, I'm an eagle." << endl;
}
void Eagle::Terbang(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
void Eagle::Berjalan(int lokasi){
	//if tidak menembus batas
		lokasi++;
}
