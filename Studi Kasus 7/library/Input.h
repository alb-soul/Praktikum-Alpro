using namespace std;

struct PNS {
  string id,nama,jabatan,notelp;
};

struct PNS pns[10];

class Input {
  public:
    void data();
    void input();
    void tofile();
  private:
    int n;

};
//void :: Input

/*typedef struct{
int id;
char nama[20];
char jabatan[20];
int notelp;
*/

void Input::input() {
cout<<"\t\t"<<"================================"<<endl;
cout<<"DAFTAR PNS"<<endl;
cout<<"======================================"<<endl;
cout<<"Masukan banyak data = ";
cin>>n;
for(int i=0;i<n;i++) {
cout<<"\nMasukkan ID : ";
cin>>pns[i].id;
cout<<"Masukkan Nama : ";
cin>>pns[i].nama;
cout<<"Masukkan Jabatan : ";
cin>>pns[i].jabatan;
cout<<"Masukkan No Telp : ";
cin>>pns[i].notelp;
cout<<endl;
}
}

void Input::tofile() {
  ofstream kefile;
  kefile.open("data.txt");
  kefile << n;
}
/*cout<<"Daftar PNS<<endl;
cout<<"==================================================================="<<endl;
cout<<|    ID   |  Nama  | Jabatan |  No Telp  |"<<endl;
cout<<"==================================================================="<<endl;
for(i=0;i<n;i++){
cout<<"|       "<<pns[i].id<<"\t\t"<<pns[i].nama<<"\t\t "<<pns[i].jabatan<<"\t\t "<<pns[i].notelp<<"     |"<<endl;
}
cout<<"==================================================================="<<endl;
*/