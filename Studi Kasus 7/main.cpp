#include <iostream>
#include <fstream>
#include "library/Input.h"
#include "library/Proses.h"
#include "library/Output.h"

int main() {
  Input x;
  x.input();
  x.tofile();

  Proses y;
  y.getFile();
  y.urutkan();
  y.toFile();

  Output z;
  z.data();
  z.output();
  z.cari();
  return 0;
}