// file Animal.cpp
#include "Animal.h"
#include "habitat.h"

float Animal::NbMakanan = 0;

Animal::Animal(int bb) : BeratBadan(bb) {
    NbMakanan += (0.02*BeratBadan);
}

Animal::~Animal() {

}

int Animal::GetBeratBadan() {
    return BeratBadan;
}

bool Animal::IsHabitat(char c) {
    return (habitat_animal.GetHabitat(0)==c || habitat_animal.GetHabitat(1)==c);
}

float Animal::GetNbMakanan() {
    return NbMakanan;
}
