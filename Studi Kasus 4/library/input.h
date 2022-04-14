using namespace std;

class Input {
  public:
      void cetak(){
        cout << "Cek Tabungan \n";
        cout << "Masukan uang saku: "; cin >> saku;
        cout << "Masukan bulan: "; cin >> bulan;
      }
      void toFile(){
        ofstream tulis_data;
        tulis_data.open("data.txt");
        tulis_data << saku << endl;
        tulis_data << bulan;
        tulis_data.close();
      }
  private:
      int saku,bulan,uang,tabung,t_tabungan,t_keluar;
};