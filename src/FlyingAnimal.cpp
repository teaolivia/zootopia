//file FlyingAnimal.cpp
#include "Animal.h"
#include "FlyingAnimal.h"
#include "habitat.h"

FlyingAnimal::FlyingAnimal(int bb, char jm) : Animal(bb,jm), JenisHabitat('a') {
    habitat_animal.AddHabitat(JenisHabitat);
}

FlyingAnimal::~FlyingAnimal() {

}
