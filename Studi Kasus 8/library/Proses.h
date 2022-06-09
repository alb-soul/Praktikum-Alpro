void Barang::proses_data() {
  for (int i=0;i<7;i++) {
    if (id==table[i][0]) {
      baris = i;
      break;
    }
  }
}