#ifndef CELL_H
#define CELL_H

class Cell {
public:
  Cell();
  Cell(char _c);
  ~Cell();
  virtual char GetChar();

private:
  char c;

};

#endif