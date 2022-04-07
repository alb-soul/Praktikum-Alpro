
using namespace std;

class Input {
  public :
    void cetak (){
      ofstream input;
      input.open("api_data.txt");
      cout << "Aplikasi Penjualan Makanan \n ";
      cout << "Menu yang tersedia : \n";
      cout << "1. Ayam Geprek Rp.21000 \n";
      cout << "2. Ayam Goreng Rp.17000 \n";
      cout << "3. Udang Goreng Rp.19000 \n";
      cout << "4. Cumi Goreng Rp.20000 \n";
      cout << "5. Ayam Bakar Rp.25000 \n";
      cout << "Pesan Ayam Geprek -> "; cin >> bnyk_AymGpr;
      cout << "Pesan Ayam Goreng -> "; cin >> bnyk_AyamGr;
      cout << "Pesan Udang Goreng -> "; cin >> bnyk_UdangGr;
      cout << "Pesan Cumi Goreng -> "; cin >> bnyk_CumiGr;
      cout << "Pesan Ayam Bakar -> "; cin >> bnyk_AymBk;
      cout << "\nJarak rumah :"; cin >> jarak;
      input.close();
    }
    void toFile(){
      ofstream tulis_data;
      tulis_data.open("api_data.txt");
      tulis_data << bnyk_AymGpr << endl;
      tulis_data << bnyk_AyamGr << endl;
      tulis_data << bnyk_UdangGr << endl;
      tulis_data << bnyk_CumiGr << endl;
      tulis_data << bnyk_AymBk << endl;
      tulis_data << jarak;
      tulis_data.close();
    }
  private :
    int bnyk_AymGpr, bnyk_AyamGr, bnyk_UdangGr, bnyk_CumiGr, bnyk_AymBk;
    double jarak;
};