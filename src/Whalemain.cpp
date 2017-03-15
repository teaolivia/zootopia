#include "animal.h"
#include "water_animal.h"
#include "Whale.h"
#include <iostream>
using namespace std;

int main() {

    Whale w;

    cout << "beratbadan: " << w.GetBeratBadan() << endl;
    cout << "nbmakanan: " << w.GetNbMakanan() << endl;
    w.Berenang();
    w.Bersuara();
    w.TampilKarakter();
    //cout << "habitat: " << w.GetJenisHabitat() << endl;
    cout << "ishabitat water: " << w.IsHabitat('a') << endl;

    return 0;

}
