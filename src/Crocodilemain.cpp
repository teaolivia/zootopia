#include "Animal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"
#include "Crocodile.h"
#include <iostream>
using namespace std;

int main() {

    Crocodile c;

    cout << "beratbadan: " << c.GetBeratBadan() << endl;
    cout << "nbmakanan: " << c.GetNbMakanan() << endl;
    c.Berenang(1);
    c.Berjalan(2);
    c.Bersuara();
    c.TampilKarakter();
    //cout << "habitat: " << c.GetJenisHabitat() << endl;

    return 0;

}
