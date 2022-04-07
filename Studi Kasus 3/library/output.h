using namespace std;
class Output {
    public:
        void getData() {
            ifstream getdata;
            getdata.open("../pra-data/pengolahan.txt");
            getdata >> tbeli;
            getdata >> tdiskon;
            getdata >> takhir;
            getdata.close();
        }
        void Cetak() {
            cout << endl;
            cout << "Total beli                 : " << tbeli << endl;
            cout << "Uang diskon                : " << tdiskon << endl;
            cout << "Total yang harus dibayar   : " << takhir << endl;

        }
    private:
        int tbeli,takhir;
        double tdiskon;
};