#include "Road.h"

Road::Road() {

}

Road::~Road() {

}

Road::Road(const Road&) {

}

Road& Road::operator=(const Road&) {
  
}

roadType Road::getEntrance() {
  return cell_entrance;
}

roadType Road::getExit() {
  return cell_exit;
}

roadType Road::getSpace() {
  return cell_space;
}