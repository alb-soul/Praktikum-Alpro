using namespace std;
#include "Class.h"

// bagian input
void Barang::input_data(){
  for (int i=0;i<7;i++) {
    cout << "Input data barang ke-" << i+1 << endl;
    for (int j=0;j<3;j++) {
      switch (j) {
        case 0: cout << "Input id\t\t= ";
                cin >> table[i][j];
                break;
        case 1: cout << "Input nama brg\t= ";
                cin >> table[i][j];
                break;
        case 2: cout << "Input harga\t\t= ";
                cin >> table[i][j];
      }
    }
    cout << "\n";
  }
  
cout<<"==================================="<<endl;
cout<<"|   ID   |   NAMA   |   HARGA   |"<<endl;
cout<<"==================================="<<endl;

for (int i=0;i<7;i++){
  for (int j=0;j<3;j++){
    cout << table[i][j] << "\t\t";
  }
  cout << "\n";
}
  cout << "\nMasukkan ID : ";
  cin>>id;

}
