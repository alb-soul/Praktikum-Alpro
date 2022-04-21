void SKS::getData_out(){
  ifstream infile;
  infile.open("data.txt");
  while(!infile.eof()){
    infile >> nim;
    infile >> nama;
    infile >> jml_matkul;
    infile >> hasil;
    infile >> total;
    infile >> diskon;
    infile >> total_diskon;
  }
  infile.close();
}

void SKS::keluaran(){
  cout << "\n\n==============================================" << endl;
  cout << "      MENENTUKAN BIAYA SKS SAAT PANDEMI" << endl;
	cout << "==============================================" << endl;
  cout << "NIM Mahasiswa \t\t\t = " << nim << endl;
  cout << "Nama Mahasiswa \t\t\t = " << nama << endl;
  cout << "Jumlah Matakuliah \t\t = " << jml_matkul << endl;
  cout << "Jumlah SKS \t\t\t\t = " << hasil << endl;
  cout <<"=============================================="<< endl;
  cout << "Total biaya \t\t\t = " << total << endl;
  cout << "Diskon 25% \t\t\t\t = "<< diskon << endl;
  cout << "Total biaya setelah di diskon \t = " << total_diskon  << endl;
  cout << "==============================================" << endl;
}