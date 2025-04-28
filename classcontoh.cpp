#include <iostream>
using namespace std;

class mahasiswa{
    public:
        int NIM;
        string nama;
        float nilai;

        void printData(){
            cout << "NIM= " << NIM << endl;
            cout << "nama= " << nama << endl;
            cout << "nilai= " << nilai << endl;
        }
};

int main(){
    mahasiswa mhs;

    mhs.NIM = 2024;
    mhs.nama = "joko widodo";
    mhs.nilai = 85.5;

    mhs.printData;
};