#include "animal.h"
#include "land_animal.h"
#include "water_animal.h"
#include "Salamander.h"
#include <iostream>
using namespace std;

int main() {

    Salamander w;

    cout << "beratbadan: " << w.GetBeratBadan() << endl;

    cout << "TampilKarakter: " << w.TampilKarakter() << endl;
    cout << "Bersuara: " << w.Bersuara() << endl;

    cout << "Lokasi awal x: " << w.GetLokasi(0) << endl;
    cout << "Lokasi awal y: " << w.GetLokasi(1) << endl;

    w.Berjalan();
    w.Berenang();


    cout << "Lokasi akhir x: " << w.GetLokasi(0) << endl;
    cout << "Lokasi akhir y: " << w.GetLokasi(1) << endl;

    cout << "nbmakanan: " << w.GetNbMakanan() << endl;

    cout << "ishabitat air: " << w.IsHabitat('a') << endl;
    cout << "ishabitat land: " << w.IsHabitat('l') << endl;
    cout << "ishabitat water: " << w.IsHabitat('w') << endl;

    cout << "jenismakanan: " << w.GetJenisMakanan() << endl;

    cout << "Liar: " << w.IsLiar() << endl;

    return 0;

}
