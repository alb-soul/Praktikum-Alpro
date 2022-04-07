using namespace std;

class Output {
  public :
     void getData(){
    cout << "\n------------------------------------\n";
    cout << "|      Rincian Belanjaan Kamu      |\n";
    cout << "------------------------------------\n";
    ifstream getData;
       getData.open("api_data.txt");
       while(!getData.eof()) {
        getData >> tbeli;
        getData >> diskon;
        getData >> pot_ongkir;
        getData >> takhir;
        getData.close();
         }
       }
    void Cetak() {
      cout << "\nTotal belanja Anda         : " << tbeli << endl;
      cout << "Anda mendapat diskon         : " << diskon << endl;
      cout << "dan potongan ongkir          : " << pot_ongkir << endl;
      cout << "Total yang harus dibayar     : " << takhir << endl;
    }
  private:
    int tbeli,pot_ongkir,takhir;
    double diskon;
};