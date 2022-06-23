using namespace std;
Peserta* isi;

void Peserta::input_data(){ 
  system("clear");
  cout << "\tMasukkan Data Mahasiswa Berhasil Masuk \n";
cout << "\t\t Babak Final Lomba Parmatika"<<endl<<endl;
  //Peserta* isi;
  isi = NULL;
  Peserta* tambah;
  char lagi;
  while (true) {
    tambah = new Peserta;
    cout << "\nNama : ";
    getline(cin,tambah->nama);
    cout << "NIM  : ";
    getline(cin,tambah->nim);
    tambah->next = isi;
    isi = tambah;
    cout << "\nInput lagi? (y/n) : ";
    cin >> lagi;
    getchar();
    if (lagi=='n') break;
  }
}