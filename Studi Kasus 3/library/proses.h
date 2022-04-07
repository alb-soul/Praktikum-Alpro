
using namespace std;

class Proses {
  public:
    void getData() {
      ifstream get_data;
      get_data.open("api_data.txt");
      char out[100];
      while(!get_data.eof()) {
        get_data >> bnyk_AymGpr;
        get_data >> bnyk_AyamGr;
        get_data >> bnyk_UdangGr;
        get_data >> bnyk_CumiGr;
        get_data >> bnyk_AymBk;
        get_data >> jarak;
      }
      get_data.close();
    }
    void toFile() {
      ofstream kefile;
      kefile.open("api_data.txt");
      kefile << total_beli << endl;
      kefile << diskon << endl;
      kefile << pot_ongkir << endl;
      kefile << total_akhir;
      kefile.close();
    }
    void Harga() {
      harga[0] = bnyk_AymGpr*21000;
      harga[1] = bnyk_AyamGr*17000;
      harga[2] = bnyk_UdangGr*19000;
      harga[3] = bnyk_CumiGr*20000;
      harga[4] = bnyk_AymBk*25000;
    }

    void Hitung() {
      if (jarak>3) ongkir = 25000;
      else ongkir = 15000;
      
      for (int i=0;i<5;i++) {
        total_beli += harga[i];
      }
      
      if (total_beli>25000 && total_beli<=50000) {
        ongkir -= 3000;
        pot_ongkir = 3000;
      }
      else if (total_beli>50000 && total_beli<=150000){
        ongkir -= 5000;
        pot_ongkir = 5000;
        diskon = 0.15;
        total_diskon = total_beli*diskon;
      }
      else {
        ongkir -= 8000;
        pot_ongkir = 8000;
        diskon = 0.35;
        total_diskon = total_beli*diskon;
      }
      total_akhir = total_beli - total_diskon + ongkir;
    }
  private:
    double jarak,diskon;
    int harga[5],jumlah,ongkir,total_beli=0,total_diskon,total_akhir,pot_ongkir;
    int bnyk_AymGpr, bnyk_AyamGr, bnyk_UdangGr, bnyk_CumiGr, bnyk_AymBk;
};