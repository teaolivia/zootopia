//file WaterAnimal.cpp
#include "Animal.h"
#include "WaterAnimal.h"
#include "habitat.h"

WaterAnimal::WaterAnimal(int bb, char jm, bool il, int x, int y) : Animal(bb,jm,il,x,y), JenisHabitat('w') {
    habitat_animal.AddHabitat(JenisHabitat);
}

WaterAnimal::~WaterAnimal() {

}
