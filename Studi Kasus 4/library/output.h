class outPut {
  public :
    void getData() {
      ifstream infile;
      infile.open("data.txt"); 
    		while(!infile.eof()) {
          infile >> t_tabung;
          infile >> bulan;
          infile >> t_keluar;
          infile.close();
    		}
    }
    void dataOut(){
    cout<<"======================================"<<endl;
    cout<<"\t\tCEK TABUNGAN"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\nTotal keseluruhan pengeluaran selama "<<bulan << " bulan: "<<t_keluar<<endl;
    cout<<"\nTotal Tabungan sekarang\t: "<<t_tabung<<endl;
    }
  private:
    int bulan,uang,tabung,keluar,t_tabung,t_keluar;
};