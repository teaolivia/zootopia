#include "Animal.h"
#include "LandAnimal.h"
#include "FlyingAnimal.h"
#include "Cendrawasih.h"
#include <iostream>
using namespace std;

int main() {

    Cendrawasih w;

    cout << "beratbadan: " << w.GetBeratBadan() << endl;
    cout << "nbmakanan: " << w.GetNbMakanan() << endl;
    //w.Berenang();
    w.Bersuara();
    w.TampilKarakter();
    //cout << "habitat: " << w.GetJenisHabitat() << endl;
    cout << "ishabitat air: " << w.IsHabitat('a') << endl;
    cout << "habitat1: " << w.GetHabitatAnimal(0) << endl;
    cout << "habitat2: " << w.GetHabitatAnimal(1) << endl;

    return 0;

}
