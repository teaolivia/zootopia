// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//file land_animal.cpp
#include "animal.h"
#include "land_animal.h"

LandAnimal::LandAnimal(int bb, char jm, bool il, int x, int y) : Animal(bb,jm,il,x,y), JenisHabitat('l') {
    habitat_animal.AddHabitat(JenisHabitat);
}

LandAnimal::~LandAnimal() {

}
