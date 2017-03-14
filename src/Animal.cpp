// file Animal.cpp
#include "Animal.h"
#include "habitat.h"

float Animal::NbMakanan = 0;
float Animal::NbSayur = 0;
float Animal::NbDaging = 0;

Animal::Animal(int bb) : BeratBadan(bb) {
    if ()
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

char Animal::GetHabitatAnimal(int i) {
    return habitat_animal.GetHabitat(i);
}

float Animal::GetNbMakanan() {
    return NbSayur+NbDaging;
}

