// file Water.h

#include "WaterAnimal.h"

#ifndef WATER_H
#define WATER_H

class Water {
public:
    Water();
    ~Water();
    char GetJenisHabitat();

    friend class WaterAnimal;

private:
    const char JenisHabitat = 'w';

};

#endif // WATER_H

