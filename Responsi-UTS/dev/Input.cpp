#include <iostream>
#include <fstream>
#include "../library/Input.h"

int main() {
  Input toko;
  if (toko.login() == false) {
    return 0;
  }
  toko.kategori();
  toko.checkout();
  toko.dataMasuk();
  return 0;
}