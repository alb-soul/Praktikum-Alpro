using namespace std;
class Proses {
    public:
        void getData() {
            ifstream infile;
            infile.open("api.txt");
            
            string cek;
            while(!infile.eof()) {
                infile >> menu;
                infile >> jumlah;
                infile >> jarak;
            }
        }
        void hitung() {
            if (jarak>3) { ongkir = 25000; }
            else { ongkir = 15000; }

            switch(menu) {
                case 1: harga = 21000; break;
                case 2: harga = 17000; break;
                case 3: harga = 19000; break;
                case 4: harga = 20000; break;
                case 5: harga = 25000;
            }
            total_beli = harga*jumlah;

            if (total_beli>25000 && total_beli<=50000) {
                ongkir -= 3000; diskon = 0;
                total_diskon = total_beli*diskon;
            }
            else if (total_beli>50000 && total_beli<= 150000) {
                ongkir -= 5000; diskon = 0.15;
                total_diskon = total_beli*diskon;
            }
            else {
                ongkir -= 8000; diskon = 0.35;
                total_diskon = total_beli*diskon;
            }
            total_akhir = total_beli-total_diskon+ongkir;
        }
        void toFile() {
            ofstream kefile;
            kefile.open("api.txt");
            kefile << total_beli << endl;
            kefile << total_diskon << endl;
            kefile << total_akhir;
            kefile.close();
        }
    private:
        int menu,jumlah,harga,ongkir,total_beli,diskon,total_diskon,total_akhir;
        double jarak;
};