void Array1dkeMatrik::proses_data() {
  index = 0;
  for (int i=0;i<byk_data;i++) {
    for (int j=0;j<3;j++) {
      matrik[i][j] = arr[index];
      index++;
    }
  }
}