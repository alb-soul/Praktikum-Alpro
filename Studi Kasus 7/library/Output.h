
class Output{
  public:
    void data();
    void output();
    void cari();
  private:
    ifstream getdata;
    int byk_org;
    string id;
};
void Output :: data(){
  getdata.open("data.txt");
  while(!getdata.eof()){
    getdata >> byk_org;
  }
}

void Output :: output(){
  cout << "============================================" << endl;
  cout << "|                Daftar PNS                |" << endl;
  cout << "============================================" << endl;
  cout << "============================================" << endl;
  cout << "|   ID   |  NAMA  |  JABATAN  |  NO. TELP  |" << endl;
  cout << "============================================" << endl;

  cout << "ASCENDING" << endl;
  for(int i=0; i<byk_org ; i++){
    cout << "--------------------------------------------" << endl;
    cout << pns[i].id << "      " << pns[i].nama << "   " << pns[i].jabatan << "   " << pns[i].notelp << endl;
  }
  cout << "--------------------------------------------" << endl;

  cout << "DESCENDING" << endl;
  for(int i=byk_org-1; i>=0 ; i--){
    cout << "--------------------------------------------" << endl;
    cout << pns[i].id << "      " << pns[i].nama << "    " << pns[i].jabatan << "    " << pns[i].notelp << endl;
  }
  cout << "--------------------------------------------" << endl;
}

void Output :: cari() {
  cout << "\nMasukkan ID untuk mendapatkan data Anda = ";
  cin >> id;
  for (int i=0;i<byk_org;i++) {
    if (pns[i].id==id) {
      cout << "ID      : " << pns[i].id << endl;
      cout << "Nama    : " << pns[i].nama << endl;
      cout << "Jabatan : " << pns[i].jabatan << endl;
      cout << "No.telp : " << pns[i].notelp << endl;
      break;
    }
  }
}
