#include "Land.h"

Land::Land() : JenisHabitat('a') {
    Habitat::AddHabitat(JenisHabitat);
}

Land::~Land() {

}


