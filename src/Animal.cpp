// file Animal.cpp
#include "Animal.h"
#include "habitat.h"

float Animal::NbSayur = 0;
float Animal::NbDaging = 0;

Animal::Animal(int bb, char jm) : BeratBadan(bb), jenis_makanan(jm) {
    if (jenis_makanan=='k') {
        NbDaging += (0.02*BeratBadan);
    }
    else if (jenis_makanan=='h') {
        NbSayur += (0.02*BeratBadan);
    }
    else if (jenis_makanan=='o') {
        NbDaging += (0.01*BeratBadan);
        NbSayur += (0.01*BeratBadan);
    }
}

Animal::~Animal() {

}

int Animal::GetBeratBadan() {
    return BeratBadan;
}

bool Animal::IsHabitat(char c) {
    return (habitat_animal.GetHabitat(0)==c || habitat_animal.GetHabitat(1)==c);
}

char Animal::GetHabitatAnimal(int i) {
    return habitat_animal.GetHabitat(i);
}

float Animal::GetNbMakanan() {
    return NbSayur+NbDaging;
}

