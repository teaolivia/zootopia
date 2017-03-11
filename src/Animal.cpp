// file Animal.cpp
#include "Animal.h"

int Animal::NbMakanan = 0;

Animal::Animal() : BeratBadan(1) {

}

Animal::Animal(int bb) : BeratBadan(bb) {

}

Animal::~Animal() {

}

int Animal::GetBeratBadan() {
    return BeratBadan;
}

int Animal::GetNbMakanan() {
    return NbMakanan;
}
