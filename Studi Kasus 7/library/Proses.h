class Proses {
  public:
    void getFile();
    void urutkan();
    void cari();
    void toFile();
  private:
    string id_temp, nama_temp, jabatan_temp, telp_temp;
    string id;
    int byk_org;
};

void Proses::getFile() {
  ifstream getfile;
  getfile.open("data.txt");
  while (!getfile.eof()) {
    getfile >> byk_org;
  }
}

void Proses::urutkan() {
  //ascending
  for (int i=0;i<byk_org;i++) {
    for (int j=0;j<byk_org-1;j++) {
      if (pns[j].id > pns[j+1].id) {
        
        id_temp = pns[j].id;
        nama_temp = pns[j].nama;
        jabatan_temp = pns[j].jabatan;
        telp_temp = pns[j].notelp;

        pns[j].id = pns[j+1].id;
        pns[j].nama = pns[j+1].nama;
        pns[j].jabatan = pns[j+1].jabatan;
        pns[j].notelp = pns[j+1].notelp;

        pns[j+1].id = id_temp;
        pns[j+1].nama = nama_temp;
        pns[j+1].jabatan = jabatan_temp;
        pns[j+1].notelp = telp_temp;
        
      }
    }
  }
  //descending
}

void Proses::toFile() {
  ofstream kefile;
  kefile.open("data.txt");
  kefile << byk_org;
}