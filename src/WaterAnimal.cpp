//file WaterAnimal.cpp
#include "Animal.h"
#include "WaterAnimal.h"
#include "habitat.h"

WaterAnimal::WaterAnimal(int bb, char jm) : Animal(bb,jm), JenisHabitat('w') {
    habitat_animal.AddHabitat(JenisHabitat);
}

WaterAnimal::~WaterAnimal() {

}
