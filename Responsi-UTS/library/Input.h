using namespace std;

//Data struct User sbg kerangka utk menampung data para user
struct User {
	string nama,user,pw;
	int saldo;
};

//Misalkan user yang terdaftar ada 3. Jadi data struct dideklarasi sbyk 3 elemen
struct User pengguna[3];

class Input{
	public:
		Input();
		bool login();
		void kategori();
		void checkout();
		void dataMasuk();
		
	private:
		ofstream tulis_data;
		string nama, user, password, alamat;
		char tambah, asuransi[50];
		int saldo, i, pilihan, index, barang, harga, banyak, data[100], jenis, ekspedisi, voucher[2], ongkir, no_potongan[20];
		double diskon[20];	
};

Input::Input() {
    cout << "=========================================================\n";
    cout << "||                                                     ||\n";
    cout << "||     WalkPay - Ecommerce Terpercaya dan Lengkap      ||\n";
    cout << "||                                                     ||\n";
    cout << "=========================================================\n";

    //database pengguna yang terdaftar
    pengguna[0].nama = "Imamuddin Al Mustaqim";
    pengguna[0].user = "Imam";
    pengguna[0].pw   = "2100018076";
    pengguna[0].saldo= 10000000;

    pengguna[1].nama = "Rauuf Anugerah Akbar";
    pengguna[1].user = "Rauuf";
    pengguna[1].pw   = "2100018069";
    pengguna[1].saldo= 15000000;

    pengguna[2].nama = "Azizah Rosyida";
    pengguna[2].user = "Azizah";
    pengguna[2].pw   = "2100018113";
    pengguna[2].saldo= 12000000;
}

bool Input::login() {
    bool login = false;
    bool blokir = false;
    int salah = 0;
    cout << "---------------------------------------------------------\n";
    cout << "           Silakan login terlebih dahulu!                \n";
    cout << "---------------------------------------------------------\n";
    while (true) {
    cout << "Username : ";
    getline(cin,user);
    cout << "Password : ";
    getline(cin,password);
        for (int i=0;i<3;i++) {
            if (user==pengguna[i].user) {
                if (password==pengguna[i].pw) {
                    login = true;
                    system("clear");
                    cout << "Selamat Datang " << pengguna[i].nama << "!\n";
                    cout << "Saldo Anda = Rp" << pengguna[i].saldo <<",- \n";
					nama = pengguna[i].nama;
					saldo = pengguna[i].saldo;
                    break;
                }
                else {
                    salah++;
                    if (salah==3) {
                        blokir = true;
                        cout << "\nPengguna diblokir!\n";
                        break;
                    }
                    cout << "\nPassword Anda salah! Coba lagi...\n";
                    break;
                }
            }
            else {
                if (i==2) {
                    cout << "\nPengguna tidak ditemukan!\n";
                }
            }
        }
        if (login==true || blokir==true) break;
	}
	return login;
}

void Input::kategori(){
	index = 0;
	jenis = 0;
	
	do{
		//daftar kategori barang
		cout << "============================================" << endl;
		cout << "||            KATEGORI BARANG             ||" << endl;
		cout << "============================================" << endl;
		cout << "  1. Elektronik" << endl;
		cout << "  2. Perawatan & Kecantikan" << endl;
		cout << "  3. Makanan & Minuman" << endl;
		cout << "  4. Pakaian" << endl;
		cout << "  5. Perlengkapan Rumah" << endl;
		cout << "============================================" << endl;
		cout << " Pilih kategori\t: ";
		cin >> pilihan;
		cout << "============================================" << endl;
		switch(pilihan){
			//nama barang setiap kategori
			case 1:
				cout << "\t     ALAT-ALAT ELEKTRONIK" << endl;
				cout << "  1. Handphone		Rp2.000.000,-" << endl;
				cout << "  2. Kamera		Rp3.000.000,-" << endl;
				cout << "  3. Laptop		Rp1.000.000,-" << endl;
				cout << "  4. TV			Rp1.000.000,-" << endl;
				cout << "  5. Setrika		Rp500.000,-" << endl;
				cout << "\n Pilih barang\t: ";
				cin >> barang;
				switch(barang){
					case 1:
						harga = 2000000;
						break;
					case 2:
						harga = 3000000;
						break;
					case 3:
						harga = 1000000;
						break;
					case 4:
						harga = 1000000;
						break;
					case 5:
						harga = 500000;
						break;		
				}
				break;
			case 2:
				cout << "\t    PERAWATAN & KECANTIKAN" << endl;
				cout << "  1. Masker		Rp20.000,-" << endl;
				cout << "  2. Lipstick		Rp50.000,-" << endl;
				cout << "  3. Pensil Alis	Rp5.000,-" << endl;
				cout << "  4. Bedak		Rp10.000,-" << endl;
				cout << "  5. Parfum		Rp70.000,-" << endl;
				cout << "\n Pilih barang\t: ";
				cin >> barang;
				switch(barang){
					case 1:
						harga = 20000;
						break;
					case 2:
						harga = 50000;
						break;
					case 3:
						harga = 5000;
						break;
					case 4:
						harga = 10000;
						break;
					case 5:
						harga = 70000;
						break;		
				}
				break;
			case 3:
				cout << "\t     MAKANAN & MINUMAN" << endl;
				cout << "  1. Sprite		Rp8.000,-" << endl;
				cout << "  2. Coca-Cola		Rp9.000,-" << endl;
				cout << "  3. Pepsi		Rp10.000,-" << endl;
				cout << "  4. Chiki		Rp6.000,-" << endl;
				cout << "  5. Roti		Rp12.000,-" << endl;
				cout << "\n Pilih barang\t: ";
				cin >> barang;
				switch(barang){
					case 1:
						harga = 8000;
						break;
					case 2:
						harga = 9000;
						break;
					case 3:
						harga = 10000;
						break;
					case 4:
						harga = 6000;
						break;
					case 5:
						harga = 12000;
						break;		
				}
				break;
			case 4:
				cout << "\t\t  PAKAIAN" << endl;
				cout << "  1. Kolor	     	Rp10.000,-" << endl;
				cout << "  2. Kaos		Rp30.000,-" << endl;
				cout << "  3. Kemeja		Rp70.000,-" << endl;
				cout << "  4. Jeans		Rp150.000,-" << endl;
				cout << "  5. Dalaman		Rp50.000,-" << endl;
				cout << "\n Pilih barang\t: ";
				cin >> barang;
				switch(barang){
					case 1:
						harga = 10000;
						break;
					case 2:
						harga = 30000;
						break;
					case 3:
						harga = 70000;
						break;
					case 4:
						harga = 150000;
						break;
					case 5:
						harga = 50000;
						break;	
				}
				break;
			case 5:
				cout << "\t     PERLENGKAPAN RUMAH" << endl;
				cout << "  1. Kursi		Rp200.000,-" << endl;
				cout << "  2. Meja		Rp500.000,-" << endl;
				cout << "  3. Seprai		Rp100.000,-" << endl;
				cout << "  4. Toples		Rp50.000,-" << endl;
				cout << "  5. Tirai		Rp1.000.000,-" << endl;
				cout << "\n Pilih barang\t: ";
				cin >> barang;
				switch(barang){
					case 1:
						harga = 200000;
						break;
					case 2:
						harga = 500000;
						break;
					case 3:
						harga = 100000;
						break;
					case 4:
						harga = 50000;
						break;
					case 5:
						harga = 1000000;
						break;	
				}
				break;
		}
		
		cout << " Banyak barang\t: ";
		cin >> banyak;
		
		data[index] = pilihan;
		data[index+1] = barang;
		data[index+2] = harga;
		data[index+3] = banyak;
		
		cout << "============================================" << endl;	
		cout << " Tambah barang lain/checkout?(t/c) ";
		cin >> tambah;
		
		jenis += 1;
		index+=4;
	}while(tambah != 'c');
	system("clear");
}

void Input::checkout(){
	int y = 0;
	cout << "============================================" << endl;
	cout << "||               KERANJANG                ||" << endl;
	cout << "============================================" << endl;
	
	for(int j = 1; j <= jenis; j++){
		cout << "--------------------------------------------" << endl;
		cout << "\t\tBarang ke-" << j << endl;
		
		switch(data[y]){
			case 1:
				switch(data[y+1]){
					case 1:
						cout << " Handphone\t\tRp2.000.000,-" << endl;
						cout << " Jumlah\t\t" << data[y+3] << endl;
						break;
					case 2:
						cout << " Kamera\t\tRp3.000.000,-" << endl;
						cout << " Jumlah\t\t" << data[y+3] << endl;
						break;
					case 3:
						cout << " Laptop\t\tRp1.000.000,-" << endl;
						cout << " Jumlah\t\t" << data[y+3] << endl;
						break;
					case 4:
						cout << " TV\t\t\tRp1.000.000,-" << endl;
						cout << " Jumlah\t\t" << data[y+3] << endl;
						break;
					case 5:
						cout << " Setrika\t\tRp500.000,-" << endl;
						cout << " Jumlah\t\t" << data[y+3] << endl;
						break;
				}
				break;
			case 2:
				switch(data[y+1]){
					case 1:
						cout << " Masker\t\tRp20.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 2:
						cout << " Lipstick\t\tRp50.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 3:
						cout << " Pensil Alis\t\tRp5.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 4:
						cout << " Bedak\t\tRp10.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 5:
						cout << " Parfum\t\tRp70.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
				}
				break;
			case 3:
				switch(data[y+1]){
					case 1:
						cout << " Sprite\t\tRp8.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 2:
						cout << " Coca-Cola\t\tRp9.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 3:
						cout << " Pepsi\t\t\tRp10.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 4:
						cout << " Chiki\t\t\tRp6.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 5:
						cout << " Roti\t\t\tRp12.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
				}
				break;
			case 4:
				switch(data[y+1]){
					case 1:
						cout << " Kolor\t\t\tRp10.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 2:
						cout << " Kaos\t\t\tRp30.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 3:
						cout << " Kemeja\t\t\tRp70.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 4:
						cout << " Jeans\t\t\tRp150.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 5:
						cout << " Dalaman\t\t\tRp50.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
				}
				break;
			case 5:
				switch(data[y+1]){
					case 1:
						cout << " Kursi\t\t\tRp200.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 2:
						cout << " Meja\t\t\tRp500.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 3:
						cout << " Seprai\t\t\tRp100.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 4:
						cout << " Toples\t\t\tRp50.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
					case 5:
						cout << " Tirai\t\t\tRp1.000.000,-" << endl;
						cout << " Jumlah\t\t\t" << data[y+3] << endl;
						break;
				}
				break;			
		}
		cout << "--------------------------------------------" << endl;
		y += 4;
	}
	y = 0;
	cin.ignore();
	cout << " Masukkan alamat Anda : ";
	getline(cin, alamat);
	
	cout << "--------------------------------------------" << endl;
	
	cout << " Voucher " << endl;
	cout << "  1. Gratis Ongkir" << endl;

	for(int j = 1; j <= jenis; j++){
		switch (data[y]){
			case 1:
				cout << "  " << j+1 << ". Potongan 10% barang elektronik" << endl;
				no_potongan[j] = j+1; //Agar nilainya dicek pas input voucher, kalau sama diskon dibawah berlaku
				diskon[j] = 0.10;
				break;
			case 2:
				cout << "  " << j+1 << ". Potongan 80% barang kecantikan" << endl;
				no_potongan[j] = j+1;
				diskon[j] = 0.80;
				break;
			case 3:
				cout << "  " << j+1 << ". Potongan 5% barang makanan & minuman" << endl;
				no_potongan[j] = j+1;
				diskon[j] = 0.05;
				break;
			case 4:
				cout << "  " << j+1 << ". Potongan 50% barang pakaian" << endl;
				no_potongan[j] = j+1;
				diskon[j] = 0.50;
				break;
			case 5:
				cout << "  " << j+1 << ". Potongan 30% barang perlengkapan rumah" << endl;
				no_potongan[j] = j+1;
				diskon[j] = 0.30;
				break;
			}
			y += 4;
		}
	
	cout << "      ---------------||---------------" << endl;
	cout << " Pilih maksimal dua voucher (0 untuk tidak): " << endl;
	for (int j = 0; j<2; j++){
		cout << "  Voucher : ";
		cin >> voucher[j];
		if (voucher[j]==1) { //Voucher gratis ongkir pasti no.1, jd kalau udh diambil, diskon[0] = 0, dan
			diskon[j] = 0;	//lanjut ke pemilihan diskon berikutnya
			continue;
		}
		if (voucher[j]==no_potongan[j]) diskon[j] = diskon[j]; //Menentukan diskon berdasarkan voucher yg diambil
	}

	cout << "--------------------------------------------" << endl;
	
	cout << " Asuransi produk +biaya Rp3.000,-?(y/t)" <<endl;
	cout << " Jawaban : ";
	cin >> asuransi;
	cout << "--------------------------------------------" << endl;
	
	cout << " Ekspedisi : " << endl;
	cout << "  1. J&E\t\t: Rp45.000,-" << endl;
	cout << "  2. J&T\t\t: Rp43.000,-" << endl;
	cout << "  3. SiCepat\t\t: Rp40.000,-" << endl;
	cout << "  4. Anteraja\t\t: Rp30.000,-" << endl;
	cout << " Pilih : ";
	cin >> ekspedisi;
	switch(ekspedisi){
		case 1:
			ongkir = 45000;
			break;
		case 2:
			ongkir = 43000;
			break;
		case 3:
			ongkir = 40000;
			break;
		case 4:
			ongkir = 45000;
			break;
	}
	cout << "--------------------------------------------" << endl;
}

void Input::dataMasuk(){
	int j = 0;
	tulis_data.open("api.txt");
	tulis_data << nama << endl;
	tulis_data << saldo << endl;
	tulis_data << jenis << endl;
	while(j < index){
		tulis_data << data[j] << endl;
		j++;
	}
	tulis_data << alamat << endl;
	j = 0;
	while(j < 2){
		tulis_data << diskon[j] << endl;
		j++;
	}
	tulis_data << asuransi << endl;
	tulis_data << ekspedisi << endl;
	tulis_data << ongkir;
	tulis_data.close();
}