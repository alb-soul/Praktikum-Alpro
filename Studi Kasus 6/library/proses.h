void array::proses() {
  cout<<"\nMASUKKAN NILAI MAHASISWA"<<endl;
  rata_tgs = 0;
  rata_uts = 0;
  rata_uas = 0;
  rata_akhir = 0;
  for (int i=0;i<n;i++) {
    cout << "------------------------------\n";
    cout << "|  Mahasiswa absen ke-" << i+1 << "  |\n";
    cout << "------------------------------\n";
    cout << "Nama mhs     = "; cin >> mhs[i];
    cout << "Nilai Tugas  = "; cin >> nilai_tgs[i];
    cout << "Nilai UTS    = "; cin >> nilai_uts[i];
    cout << "Nilai UAS    = "; cin >> nilai_uas[i];
    rata[i] = (nilai_tgs[i] + nilai_uts[i] + nilai_uas[i])/3;
    nilai_akhir[i] = (nilai_tgs[i]*0.20)+(nilai_uts[i]*0.35)+(nilai_uas[i]*0.45);
    rata_tgs += nilai_tgs[i];
    rata_uts += nilai_uts[i];
    rata_uas += nilai_uas[i];
    rata_akhir += nilai_akhir[i];
  }
    rata_tgs /= n;
    rata_uts /= n;
    rata_uas /= n;
    rata_akhir /= n;
}