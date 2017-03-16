// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//file WaterAnimal.cpp
#include "animal.h"
#include "water_animal.h"
#include "habitat.h"

WaterAnimal::WaterAnimal(int bb, char jm, bool il, int x, int y) : Animal(bb,jm,il,x,y), JenisHabitat('w') {
    habitat_animal.AddHabitat(JenisHabitat);
}

WaterAnimal::~WaterAnimal() {

}
