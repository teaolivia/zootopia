//file LandAnimal.cpp
#include "Animal.h"
#include "LandAnimal.h"

LandAnimal::LandAnimal(int bb) : Animal(bb), JenisHabitat('l') {
    habitat_animal.AddHabitat(JenisHabitat);
}

LandAnimal::~LandAnimal() {

}
