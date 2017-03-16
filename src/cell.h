// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091
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