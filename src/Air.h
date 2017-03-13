// file Air.h

#include "habitat.h"

#ifndef AIR_H
#define AIR_H

class Air : public Habitat {
public:
    Air();
    ~Air();

private:
    const char JenisHabitat = 'a';

};

#endif // AIR_H

