void Peserta :: output_data(){
  int i = 1;
  Peserta* cetak = isi;
  
  cout << "========================================" << endl;
  cout << "|             PESERTA FINAL            |" << endl;
  cout << "========================================" << endl;
  cout << "----------------------------------------" << endl;
  cout << "|No.|      NIM      |       NAMA       |" << endl;
  cout << "----------------------------------------" << endl;
  while(cetak != NULL){
    cout << "  " << i << "     " << cetak -> nim << "           " << cetak -> nama << endl;
    cout << "----------------------------------------" << endl;
    cetak = cetak -> next;
    i++;
  }
  cout << "========================================" << endl;
}
