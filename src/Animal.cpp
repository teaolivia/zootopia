// file Animal.cpp
#include "Animal.h"

float Animal::NbMakanan = 0;

Animal::Animal(int bb) : BeratBadan(bb) {
    NbMakanan += (0.02*BeratBadan);
}

Animal::~Animal() {

}

int Animal::GetBeratBadan() {
    return BeratBadan;
}

float Animal::GetNbMakanan() {
    return NbMakanan;
}
