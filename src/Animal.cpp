// Pembuat :
// Jacqueline Ibrahim - 13512074
// Aurelia - 13512099

// file Animal.cpp
#include "animal.h"
#include "matriks.h"
#include "habitat.h"

float Animal::nb_sayur = 0;
float Animal::nb_daging = 0;

Animal::Animal(int bb, char jm, bool il, int x, int y) : berat_badan(bb), jenis_makanan(jm), is_liar(il) {
    lokasi = new int[2];
    lokasi[0] = x;
    lokasi[1] = y;
    if (jenis_makanan=='k') {
        nb_daging += (0.02*berat_badan);
    }
    else if (jenis_makanan=='h') {
        nb_sayur += (0.02*berat_badan);
    }
    else if (jenis_makanan=='o') {
        nb_daging += (0.01*berat_badan);
        nb_sayur += (0.01*berat_badan);
    }
}

Animal::~Animal() {

}

void Animal::Bergerak(int x, int y, Matriks& m) {
    if (IsHabitat(Matriks[lokasi[0]+x][lokasi[1]+y].GetJenisHabitat())) {
        lokasi[0] += x;
        lokasi[1] += y;
    }

}

bool Animal::IsLiar() {
    return is_liar;
}

int Animal::GetLokasi(int i) {
    return lokasi[i];
}

int Animal::GetBeratBadan() {
    return berat_badan;
}

bool Animal::IsHabitat(char c) {
    return (habitat_animal.GetHabitat(0)==c || habitat_animal.GetHabitat(1)==c);
}

char Animal::GetHabitatAnimal(int i) {
    return habitat_animal.GetHabitat(i);
}

float Animal::GetNbMakanan() {
    return nb_sayur+nb_daging;
}

float Animal::GetNbSayur() {
    return nb_sayur;
}

float Animal::GetNbDaging() {
    return nb_daging;
}
