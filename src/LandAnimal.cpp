//file LandAnimal.cpp
#include "Animal.h"
#include "LandAnimal.h"

LandAnimal::LandAnimal(int bb, char jm) : Animal(bb,jm), JenisHabitat('l') {
    habitat_animal.AddHabitat(JenisHabitat);
}

LandAnimal::~LandAnimal() {

}
