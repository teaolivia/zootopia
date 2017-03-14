// file habitat.h

#ifndef HABITAT_H
#define HABITAT_H

class Habitat {
public:
    Habitat();
    void AddHabitat(char c);
    char GetHabitat(int i);
    //bool IsHabitat(char c);
protected:
    char *habitat;
    const int size = 2;
};

#endif // HABITAT_H
