using namespace std;

class Peserta {
  public:
    void input_data();
    void output_data();
    string nim,nama;
    Peserta* next;
};