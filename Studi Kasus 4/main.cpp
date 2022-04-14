#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main() {

  Input input;
  input.cetak();
  input.toFile();

  Proses proses;
  proses.getData();
  proses.proses();
  proses.toFile();
  
  outPut keluar;
  keluar.getData();
  keluar.dataOut();
  return 0;
}