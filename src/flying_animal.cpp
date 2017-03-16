// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

//file FlyingAnimal.cpp
#include "animal.h"
#include "flying_animal.h"
#include "habitat.h"

FlyingAnimal::FlyingAnimal(int bb, char jm, bool il, int x, int y) : Animal(bb,jm,il,x,y), JenisHabitat('a') {
    habitat_animal.AddHabitat(JenisHabitat);
}

FlyingAnimal::~FlyingAnimal() {

}
