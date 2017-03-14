// file habitat.cpp

#include "habitat.h"

Habitat::Habitat() : size(2) {
    habitat = new char[size];
    for (int i=0; i<size; i++) {
        habitat[i] = '\0';
    }
}

void Habitat::AddHabitat(char c) {
    if (habitat[0]=='\0')
        habitat[0] = c;
    else
        habitat[1] = c;
}

char Habitat::GetHabitat(int i) {
    return habitat[i];
}
