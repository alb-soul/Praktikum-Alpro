#include <iostream>
#include <fstream>
#include "../library/proses.h"

int main() {
    Proses proses;
    proses.getData();
    proses.hitung();
    proses.toFile();
    return 0;
}