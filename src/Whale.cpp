// file Whale.cpp
#include "Whale.h"
#include <iostream>
using namespace std;

Whale::Whale() {

}

Whale::Whale(int bb, bool amf) : Animal(bb,amf) {

}

Whale::~Whale() {

}

void Whale::Swim() {
    cout << "whale swims" << endl;
}
