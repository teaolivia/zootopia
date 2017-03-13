//file WaterAnimal.cpp
#include "Animal.h"
#include "WaterAnimal.h"
#include "Water.h"

WaterAnimal::WaterAnimal(int bb) : Animal(bb), JenisHabitat('w') {
    habitat_animal.AddHabitat(JenisHabitat);
}

WaterAnimal::~WaterAnimal() {

}
