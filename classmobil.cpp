#include <iostream>
using namespace std;

class mobil{
    public:
        string nama_Mobil;
        string tipe_Mobil;
    private:
        int harga_Mobil;

    public:
        void input_Data(){
            cout << "masukkan nama mobil= ";
            cin >> nama_Mobil;
            cout << "masukkan tipe mobil= ";
            cin >> tipe_Mobil;
            cout << "masukkan harga mobil= ";
            cin >> harga_Mobil;
    }
    void output_data(){
        cout << "harga mobil= " << harga_Mobil << endl; 
    }
};

int main(){
    mobil mazda;
    mazda.input_Data();

    cout << "nama mobil= " << mazda.nama_Mobil << endl;
    cout << "tipe mobil= " << mazda.tipe_Mobil << endl;
    mazda.output_data();

}