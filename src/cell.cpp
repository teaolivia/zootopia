// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


#include "cell.h"

   /** @brief return nilai integer dari isi cell
     */
	bool Cell::isEmpty() {
		return getString() == NULL;
	}

  	char Cell::getSymbol() {
  		return "a";
  	}