#include "cell.h"

Cell::Cell() {
    c = '\0';
}

Cell::Cell(char _c) {
    c = _c;
}

Cell::~Cell() {

}

char Cell::GetChar() {
    return c;
}
