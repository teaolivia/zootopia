#include "Facility.h"

// 5 sekawan
Facility::Facility() {
	area = 0;
}

Facility::Facility(int area) {
	this->area;
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