#include "Cage.h"


// template <class habitat>
// int Cage<habitat>::countCell = 0;

template <class habitat>
Cage<habitat>::Cage() {

}

template <class habitat>
Cage<habitat>::~Cage() {

}

template <class habitat>
Cage<habitat>::Cage(habitat const& h) {

}

template <class habitat>
bool Cage<habitat>::CageCollisionCheck() {
	return Cell::CollisionCheck();
}


