void array::output(){
  //int nilai[n];
  cout<<endl;
  cout<<"======================================"<<endl;
  cout<<"\t\tDAFTAR NILAI MAHASISWA"<<endl;
  cout<<"======================================"<<endl;
  cout<<" Nama dosen\t\t= "<<dosen<<endl;
  cout<<" Mata kuliah\t= "<<matkul<<endl;
  cout<<" Daftar nilai mahasiswa"<<endl;
  for(int i=0; i<n; i++){
    cout<<"\t"<<i+1<<". "<<mhs[i]<<endl;
    cout<<"\t\tNilai Tugas\t= "<<nilai_tgs[i]<<endl;
    cout<<"\t\tNilai UTS\t= "<<nilai_uts[i]<<endl;
    cout<<"\t\tNilai UAS\t= "<<nilai_uas[i]<<endl;
    cout<<"\t\tNilai Akhir\t= "<<nilai_akhir[i]<<endl;
  }
  cout<<"======================================"<<endl;
  cout<<"\t\tSeluruh Mahasiswa\n"<<endl;
  cout<<" Rata-rata nilai Tugas\t= "<<rata_tgs<<endl;
  cout<<" Rata-rata nilai UTS\t= "<<rata_uts<<endl;  
  cout<<" Rata-rata nilai UAS\t= "<<rata_uas<<endl;
  cout<<" Rata-rata nilai Akhir\t= "<<rata_akhir<<endl;
}