#include "Air.h"

Air::Air() : JenisHabitat('a') {
    Habitat::AddHabitat(JenisHabitat);
}

Air::~Air() {

}
