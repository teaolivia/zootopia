// file Animal.cpp
#include "Animal.h"

int Animal::NbMakanan = 0;

Animal::Animal(int bb) : BeratBadan(bb) {
    NbMakanan += (0.02*BeratBadan);
}

Animal::~Animal() {

}

int Animal::GetBeratBadan() {
    return BeratBadan;
}

int Animal::GetNbMakanan() {
    return NbMakanan;
}
