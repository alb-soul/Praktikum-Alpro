void SKS::getData_proses() {
  ifstream infile;
  infile.open("data.txt");
  while(!infile.eof()) {
    infile >> nim;
    infile >> nama;
    infile >> jml_matkul;
  }
  infile.close();
}

void SKS::proses_proses() {
    hasil = 1;
  	hasil = ambil_matkul(jml_matkul);
  	total = hasil * 150000;
  	diskon = total * 25/100;
  	total_diskon = total - diskon;
}

int SKS::ambil_matkul(int x){
  if (x==0){
    cout << "Jumlah keseluruhan sks : " << hasil;
	return hasil;
  }
  else{
    cout << "\nMasukkan mata kuliah yang diambil : ";
    cin >> matkul;
    cout << "Masukkan jumlah SKS yang diambil : ";
    cin >> sks;
    hasil=+sks;
    return ambil_matkul(x-1);
  }
}

void SKS::toFile_proses() {
  ofstream kefile;
  kefile.open("data.txt");
  kefile << nim << endl;
  kefile << nama << endl;
  kefile << jml_matkul << endl;
  kefile << hasil << endl;
  kefile << total << endl;
  kefile << diskon << endl;
  kefile << total_diskon;
}