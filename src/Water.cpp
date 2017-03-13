#include "Water.h"

Water::Water() : JenisHabitat('w') {
    Habitat::AddHabitat(JenisHabitat);
}

Water::~Water() {

}
