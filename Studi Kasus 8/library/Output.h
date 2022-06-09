void Barang :: output_data(){
  cout << "\n======================================" << endl;
  cout << "|          HASIL PENCARIAN           |" << endl;
  cout << "======================================" << endl;
  cout << "--------------------------------------" << endl;
  cout << "|    ID    |    NAMA    |    HARGA   |" << endl;
  cout << "--------------------------------------" << endl;
  for (int i=0; i<3; i++){
    cout << "\t" << table[baris][i] << "\t"; 
  }
  cout << endl;
  cout << "--------------------------------------" << endl;
  cout << "======================================" << endl;
}
