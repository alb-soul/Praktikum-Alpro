#include <iostream>
#include <fstream>
#include "library/class.h"
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main() {
  array nilaiMahasiswa;
  nilaiMahasiswa.input();
  nilaiMahasiswa.proses();
  nilaiMahasiswa.output();
  
  return 0;
}