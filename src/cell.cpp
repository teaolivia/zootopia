#include "cell.h"

 /** @brief return nilai integer dari isi cell
   */
bool Cell::isEmpty() {
  return getString() == NULL;
}

char Cell::getSymbol() {
  return "a";
}