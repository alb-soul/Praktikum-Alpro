using namespace std;
#include "Class.h"

// bagian input
void Barang::input_data(){
  cout<<"==================================="<<endl;
cout<<"|   ID   |   NAMA   |   HARGA   |"<<endl;
cout<<"==================================="<<endl;
table [0][0] = "100"; table[0][1] = "Beras"; table [0][2] = "Rp45.000"; 
table [1][0] = "210"; table[1][1] = "Gula"; table[1][2] = "Rp11.000"; 
table[2][0] = "330"; table[2][1] = "Garam"; table[2][2] = "Rp10.000";
table[3][0]= "560"; table[3][1] = "Gas LPG"; table[3][2] = "Rp20.000";
table[4][0] = "741"; table[4][1] = "Bumbu Dapur"; table[4][2] = "Rp5.500";
table[5][0] = "805"; table[5][1] = "Es Batu"; table[5][2] = "Rp100.000";
table[6][0] = "998"; table[6][1] = "Air Galon"; table[6][2] = "Rp20.500"; 

for (int i=0;i<7;i++){
  for (int j=0;j<3;j++){
    cout << table[i][j] << "\t\t";
  }
  cout << "\n";
}
  cout << "\nMasukkan ID : ";
  cin>>id;
  




  
  
  
  
  
  
  
}