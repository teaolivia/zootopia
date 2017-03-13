// file Water.h

#include "habitat.h"

#ifndef WATER_H
#define WATER_H

class Water : public Habitat {
public:
    Water();
    ~Water();
    
private:
    const char JenisHabitat = 'w';

};

#endif // WATER_H

