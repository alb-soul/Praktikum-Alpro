#include <iostream>
#include <fstream>
using namespace std;
#include "../library/Proses.h"

int main() {
  Proses proses;
  proses.getData();
  proses.proses();
  proses.toFile();
  return 0;
}