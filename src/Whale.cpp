// file Whale.cpp
#include "Whale.h"
#include <iostream>
using namespace std;

Whale::Whale() : WaterAnimal(defaultBeratBadan) {

}

Whale::~Whale() {

}

void Whale::Berenang() {
    cout << "whale swims" << endl;
}

void Whale::TampilKarakter() {
    cout << "it's a whale!" << endl;
}

void Whale::Bersuara() {
    cout << "ngggggg" << endl;
}
