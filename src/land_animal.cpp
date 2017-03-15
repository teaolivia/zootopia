//file LandAnimal.cpp
#include "Animal.h"
#include "LandAnimal.h"

LandAnimal::LandAnimal(int bb, char jm, bool il, int x, int y) : Animal(bb,jm,il,x,y), JenisHabitat('l') {
    habitat_animal.AddHabitat(JenisHabitat);
}

LandAnimal::~LandAnimal() {

}
