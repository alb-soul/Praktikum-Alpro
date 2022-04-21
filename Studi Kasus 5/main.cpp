#include <iostream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"


int main() {
  SKS Mahasiswa;
  Mahasiswa.hitung();
  Mahasiswa.toFile();
  
  Mahasiswa.getData_proses();
  Mahasiswa.proses_proses();
  Mahasiswa.toFile_proses();
  

  Mahasiswa.getData_out();
  Mahasiswa.keluaran();

  return 0;
}