// file Animal.cpp
#include "Animal.h"

int Animal::NbMakanan = 0;

Animal::Animal() : BeratBadan(1), PorsiMakan(1) {

}

Animal::Animal(int bb, int por) : BeratBadan(bb), PorsiMakan(por) {

}

Animal::~Animal() {

}

int Animal::GetBeratBadan() {
    return BeratBadan;
}

int Animal::GetPorsiMakan() {
    return PorsiMakan;
}

int Animal::GetNbMakanan() {
    return NbMakanan;
}
