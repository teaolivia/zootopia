#include "Cage.h"
#include "Land.h"
#include "Water.h"
#include "Air.h"

template <class Habitat>
int Cage<Habitat>::countCell = 0;

template <class Habitat>
Cage<Habitat>::Cage() {

}

template <class Habitat>
Cage<Habitat>::~Cage() {

}

template <class Habitat>
Cage<Habitat>::Cage(Habitat const& h) {

}

// template <class Habitat>
// Habitat Cage<Land>::getLand() {
// 	return Land;
// }

// template <class Habitat>
// Habitat Cage<Water>::getWater() {
// 	return Water;
// }

// template <class Habitat>
// Habitat Cage<Air>::getAir() {
// 	return Air;
// }

