// file WaterHabitat.h

#ifndef WATERHABITAT_H
#define WATERHABITAT_H

class WaterHabitat {
public:
    WaterHabitat();
    ~WaterHabitat();
    char GetJenisHabitat();

private:
    const char JenisHabitat = 'w';

};

#endif // WATERHABITAT_H

