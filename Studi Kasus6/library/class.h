using namespace std;
class array {
  public:
    void input();
    void proses();
    void output();

  private:
  	string matkul, dosen, mhs[50];
    int n,nilai_tgs[50], nilai_uts[50],nilai_uas[50];
    double nilai_akhir[50], rata[50], rata_tgs, rata_uts, rata_uas, rata_akhir;
};