using namespace std;
#include "Class.h"

void Array1dkeMatrik::input_data(){
    cout<<"Masukkan Banyak Data Mahasiswa = ";
    cin>>byk_data;
    getchar();
    cout << "\n";
    for (int i=0;i<byk_data*3;i++) {
      cout << "Kelas = ";
      getline(cin,arr[i]);
      i++;
      cout << "NIM   = ";
      getline(cin,arr[i]);
      i++;
      cout << "Nama  = ";
      getline(cin,arr[i]);
      cout << "\n";
    }
}