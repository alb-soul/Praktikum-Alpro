#include <iostream>
#include "library/Input.h"
#include "library/Proses.h"
#include "library/Output.h"

int main() {
  Barang x;
  x.input_data();
  x.proses_data();
  x.output_data();
  return 0;
}