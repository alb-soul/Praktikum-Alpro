#include <cstdio>
class Output{
  public:
    void getData_out();
    void keluaran();

  private:
    char nama[30],alamat[50],ekspedisi[10],nama_produk[20][20];
    int saldo,harga[20],jumlah[20];
    int byk_barang,harga_total,harga_akhir;
    double potongan;
    char buffer[1];
};
void Output::getData_out(){
  ifstream infile;
  infile.open("api.txt");
  while(!infile.eof()){
    infile.getline(nama,30);
    infile.getline(alamat,50);
    infile.getline(ekspedisi,10);
    infile >> byk_barang;
    for (int i=0;i<byk_barang;i++) {
        infile.getline(buffer,1,'\n');
        infile.getline(nama_produk[i],20);
        infile >> harga[i];
        infile >> jumlah[i];
    }
    infile >> harga_total;
    infile >> potongan;
    infile >> harga_akhir;
    infile >> saldo;
  }
  infile.close();
}

void Output::keluaran() {
  cout << "========================================="<<endl;         
  cout << "||       Silahkan cek struk Anda       ||" << endl;
  cout << "||           TERIMA KASIH              ||" << endl;
  cout << "========================================="<<endl;
  FILE *kefile;
  kefile = fopen("api.txt","w");
  fputs("=========================================\n",kefile);
  fputs("\t\tSTRUK TRANSAKSI ANDA\n",kefile);
  fputs("=========================================\n",kefile);
  fprintf(kefile,"Nama          : %s\n",nama);
  fprintf(kefile,"Alamat        : %s\n",alamat);
  fprintf(kefile,"Ekspedisi     : %s\n",ekspedisi);
  
  for (int i=0;i<byk_barang;i++) {
    fprintf(kefile,"-----------------------------------------\n");
    fprintf(kefile,"  Nama Barang         : %s\n",nama_produk[i]);
    fprintf(kefile,"  Harga               : %i\n",harga[i]);
    fprintf(kefile,"  Jumlah              : %i\n",jumlah[i]);
    fprintf(kefile,"-----------------------------------------\n");
  }
  fprintf(kefile,"\nHarga Total      : %i\n",harga_total);
  fprintf(kefile,"Diskon           : %lf\n",potongan);
  fprintf(kefile,"Total Pembayaran : %i\n",harga_akhir);
  fprintf(kefile,"Sisa Saldo       : %i", saldo);
  fclose(kefile);
}