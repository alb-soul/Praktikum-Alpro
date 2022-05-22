class Proses {
    public:
        void getData();
        void proses();
        void toFile();
    private:
        string nama,user,alamat,ekspedisi,nama_produk[20];
        int saldo,kategori[20],produk[20],harga[20],jumlah[20];
        int byk_barang,no_ekspedisi,ongkir,harga_total,harga_akhir;
        char asuransi;
        double potongan,voucher[2];
};

void Proses::getData() {
    char buffer[1];
    ifstream getdata;
    getdata.open("api.txt");
    while (!getdata.eof()) {
        getline(getdata,nama);
        getdata >> saldo;
        getdata >> byk_barang;
        for (int i=0;i<byk_barang;i++) {        
            getdata >> kategori[i];
            getdata >> produk[i];
            getdata >> harga[i];
            getdata >> jumlah[i];
        }
        getdata.getline(buffer,1);
        getline(getdata,alamat);
        for (int i=0;i<2;i++) {
            getdata >> voucher[i];
        }
        getdata >> asuransi;
        getdata >> no_ekspedisi;
        getdata >> ongkir;
    }
    getdata.close();
}

void Proses::proses() {
    harga_total = 0;
    for (int i=0;i<byk_barang;i++) {
        harga_total += (harga[i]*jumlah[i]);
    }
    switch (no_ekspedisi) {
        case 1:
            ekspedisi = "J&E";
            break;
        case 2:
            ekspedisi = "J&T";
            break;
        case 3:
            ekspedisi = "SiCepat";
            break;
        case 4:
            ekspedisi = "Anteraja";
    }
    for (int i=0;i<byk_barang;i++) {
        switch(kategori[i]) {
            case 1:
                switch(produk[i]) {
                    case 1:
                        nama_produk[i] = "Handpone";
                        break;
                    case 2:
                        nama_produk[i] = "Kamera";
                        break;
                    case 3:
                        nama_produk[i] = "Laptop";
                        break;
                    case 4:
                        nama_produk[i] = "TV";
                        break;
                    case 5:
                        nama_produk[i] = "Setrika";
                }
                break;
            case 2:
                switch(produk[i]) {
                    case 1:
                        nama_produk[i] = "Masker";
                        break;
                    case 2:
                        nama_produk[i] = "Lipstik";
                        break;
                    case 3:
                        nama_produk[i] = "Pensil Alis";
                        break;
                    case 4:
                        nama_produk[i] = "Bedak";
                        break;
                    case 5:
                        nama_produk[i] = "Parfum";
                }
                break;
            case 3:
                switch(produk[i]) {
                    case 1:
                        nama_produk[i] = "Sprite";
                        break;
                    case 2:
                        nama_produk[i] = "Coca-cola";
                        break;
                    case 3:
                        nama_produk[i] = "Pepsi";
                        break;
                    case 4:
                        nama_produk[i] = "Chiki";
                        break;
                    case 5:
                        nama_produk[i] = "Roti";
                }
                break;
            case 4:
                switch(produk[i]) {
                    case 1:
                        nama_produk[i] = "Kolor";
                        break;
                    case 2:
                        nama_produk[i] = "Kaos";
                        break;
                    case 3:
                        nama_produk[i] = "Kemeja";
                        break;
                    case 4:
                        nama_produk[i] = "Jeans";
                        break;
                    case 5:
                        nama_produk[i] = "Dalaman";
                }
                break;
            case 5:
                switch(produk[i]) {
                    case 1:
                        nama_produk[i] = "Kursi";
                        break;
                    case 2:
                        nama_produk[i] = "Meja";
                        break;
                    case 3:
                        nama_produk[i] = "Seprai";
                        break;
                    case 4:
                        nama_produk[i] = "Toples";
                        break;
                    case 5:
                        nama_produk[i] = "Tirai";
                }
        }
    }

    potongan = voucher[0] + voucher[1];
    
    if (voucher[0]==0) {
        if (asuransi=='y') {
            harga_akhir = harga_total-(harga_total*potongan)+3000;
        }
        else {
            harga_akhir = harga_total-(harga_total*potongan);
        }
    }
    else {
        if (asuransi=='y') {
            harga_akhir = harga_total-(harga_total*potongan)+ongkir+3000;
        }
        else {
            harga_akhir = harga_total-(harga_total*potongan)+ongkir;
        }
    }

    saldo = saldo - harga_akhir;


}

void Proses::toFile() {
    ofstream tofile;
    tofile.open("api.txt");
    tofile << nama << endl;
    tofile << alamat << endl;
    tofile << ekspedisi << endl;
    tofile << byk_barang << endl;
    for (int i=0;i<byk_barang;i++) {
        tofile << nama_produk[i] << endl;
        tofile << harga[i] << endl;
        tofile << jumlah[i] << endl;
    }
    tofile << harga_total << endl;
    tofile << potongan << endl;
    tofile << harga_akhir << endl;
    tofile << saldo;
    tofile.close();
}