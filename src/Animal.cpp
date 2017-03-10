// file Animal.cpp
#include "Animal.h"

int Animal::NbMakanan = 0;

Animal::Animal() : beratBadan(1), amfibi(1) {

}

Animal::Animal(int bb, bool amf) : beratBadan(bb), amfibi(amf) {

}

Animal::~Animal() {

}

int Animal::getberatBadan() {
    return beratBadan;
}

int Animal::GetNbMakanan() {
    return NbMakanan;
}

bool Animal::isAmfibi() {
    return amfibi;
}
