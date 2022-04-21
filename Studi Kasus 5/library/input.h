#include <fstream>
using namespace std;
class SKS {
	public: 
    	int ambil_matkul(int x);
    	void hitung(){
       cout << "MENENTUKAN BIAYA SKS SAAT PANDEMI\n";
       cout << "Masukkan Nama Mahasiswa : "; cin >> nama;
  	   cout << "Masukkan NIM Mahasiswa : "; cin >> nim;
  	   cout << "Masukkan jumlah matakuliah yang diambil : "; cin >> jml_matkul;
      }

      void toFile(){
        ofstream tulis_data;
        tulis_data.open("data.txt");
        tulis_data << nama << endl;
        tulis_data << nim << endl;
        tulis_data << jml_matkul;
        tulis_data.close();
      }

      //Utk proses
      void getData_proses();
      void proses_proses();
      void toFile_proses();

      //utk output
      void getData_out();
      void keluaran();

  private:
 		int sks, total, diskon, total_biaya1, total_biaya2, total_diskon, pembayaran;
  		int jml_matkul, biaya, hasil;
  		string matkul;
  		char nim[20], nama[50];
  
};  