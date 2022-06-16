 void Array1dkeMatrik :: output_data(){
  int x = 0;
  //output dari array 1D
  cout << "==============================================" << endl;
  cout << "|          DATA MAHASISWA SEBELUM 2D         |" << endl;
  cout << "==============================================" << endl;
  cout << "|  Kelas  |     NIM     |        Nama        |" << endl;
  cout << "==============================================" << endl;
  for(int i=0; i<byk_data*3; i++){
    cout << "        " << arr[i];
    if(x==2){
      cout << endl;
      x = 0;
    }else{
      x = x+1;
    }
  }
  cout << "==============================================\n" << endl;

  //output dari array 2d
  cout << "==============================================" << endl;
  cout << "|               DATA MAHASISWA               |" << endl;
  cout << "==============================================" << endl;
  cout << "|  Kelas  |     NIM     |        Nama        |" << endl;
  cout << "==============================================" << endl;
  cout << "----------------------------------------------" << endl;
  for(int i=0; i<byk_data; i++){
    for(int j=0; j<3; j++){
      cout << "|   " << matrik[i][j] << "    ";
      if(j==2){
        cout << "|";
      }
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
  }
  cout << "==============================================" << endl;
}
