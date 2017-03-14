#include "Facility.h"

// 5 sekawan
Facility::Facility() {
	area = 0;
}

Facility::Facility(int length, int width) {
	this->length = length;
  this->width = width;
}

Facility::Facility(const Facility&) {

}

Facility::~Facility() {
	area = 0;
}

Facility& Facility::operator=(const Facility&) {

}

// getter & setter
int Facility::getArea() {
	return length * width;
}
