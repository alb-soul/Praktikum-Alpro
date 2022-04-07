#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main() {
    Menu input;
    input.inputData();

    Proses proses;
    proses.getData();
    proses.hitung();
    proses.toFile();

    Output out;
    out.getData();
    out.Cetak();
    return 0;
}