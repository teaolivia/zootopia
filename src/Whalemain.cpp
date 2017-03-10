#include "Animal.h"
#include "WaterAnimal.h"
#include "Whale.h"
#include <iostream>
using namespace std;

int main() {

    Whale a;


    cout << "beratbadan: " << a.getberatBadan() << endl;
    cout << "isamfibi: " << a.isAmfibi() << endl;
    cout << "getnbmakanan: " << a.GetNbMakanan() << endl;

    return 0;

}
