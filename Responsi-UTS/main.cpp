#include <iostream>
#include <string.h>
#include <fstream>
#include "library/Input.h"
#include "library/Proses.h"
#include "library/Output.h"

int main() {
  Input toko;
  if (toko.login() == false) {
    return 0;
  }
  toko.kategori();
  toko.checkout();
  toko.dataMasuk();

  Proses proses;
  proses.getData();
  proses.proses();
  proses.toFile();

  Output output;
  output.getData_out();
  output.keluaran();
  
  return 0;
}