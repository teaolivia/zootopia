// file LandHabitat.h

#ifndef LANDHABITAT_H
#define LANDHABITAT_H

class LandHabitat {
public:
    LandHabitat();
    ~LandHabitat();
    char GetJenisHabitat();

private:
    const char JenisHabitat = 'l';

};

#endif // LANDHABITAT_H
