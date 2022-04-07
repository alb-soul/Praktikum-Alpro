using namespace std;
class Menu {
    public:
        Menu() {
            cout << "Menu Makanan dan Harganya\n";
            cout << "1. Ayam geprek     : 21000\n";
            cout << "2. Ayam goreng     : 17000\n";
            cout << "3. Udang goreng    : 19000\n";
            cout << "4. Cumi goreng     : 20000\n";
            cout << "5. Ayam bakar      : 25000 \n";
        }
        void inputData() {
            ofstream datain;
            datain.open("api.txt");
            
            cout << "Pilih menu : ";
            cin >> menu;
            datain << menu << endl;
            cout << "Jumlah     : ";
            cin >> jumlah;
            datain << jumlah << endl;
            cout << "Jarak rumah: ";
            cin >> jarak;
            datain << jarak;
            datain.close();
        }
    private:
        int menu,jumlah;
        double jarak;
        char opsi;
};