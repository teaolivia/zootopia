//file WaterAnimal.cpp
#include "Animal.h"
#include "WaterAnimal.h"
#include "Water.h"

WaterAnimal::WaterAnimal(int bb) : Animal(bb) {

}

WaterAnimal::~WaterAnimal() {

}

char WaterAnimal::GetJenisHabitat() {
    return w->JenisHabitat;
}
