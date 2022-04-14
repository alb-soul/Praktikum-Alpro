class Proses {
  public:
  void getData() {
    ifstream infile;
    infile.open("data.txt");
    infile >> saku;
    infile >> bulan;
    infile.close();
  }
  void proses() {
    uang =saku;
    t_tabungan = 0;
    t_keluar = 0;
    int i = 1;
    cout << "\nBulan ke:\tUang saat ini:\t\tTabungan saat ini:\n";
    while(i<=bulan) {
      cout << i << "\t\t\t" << uang << "\t\t\t\t" << t_tabungan << endl;
      cout << "\t\t\t\t\t\t\t\t\tPengeluaran  = ";
      cin >> keluar;
      cout << "\t\t\t\t\t\t\t\t\tDitabung     = ";
      cin >> tabung;
      cout << "--------------------------------------------------------------\n";
      t_keluar += keluar;
      t_tabungan += tabung;
      uang -= (keluar+tabung);
      uang += saku;
      i++;
      cout << "\n\n";
    }
  }
  void toFile() {
    ofstream tofile;
    tofile.open("data.txt");
    tofile << t_tabungan << endl;
    tofile << bulan << endl;
    tofile << t_keluar;
  }
  private:
  int saku,bulan,uang,tabung,keluar,t_tabungan,t_keluar;
};