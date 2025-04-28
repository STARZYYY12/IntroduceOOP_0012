#include <iostream>
using namespace std;

class LuaspersegiPanjang{
    private:
        int panjang;
        int lebar;
        int luas;

        public:
            void inputData(){
                cout << "masukkan panjang= ";
                cin >> panjang;
                cout << "masukkan lebar= ";
                cin >> lebar;
            }
            void hitungLuas(){
                luas = panjang * lebar;

            }
            
            void outputData(){
                cout << "tampilkan luas= " << luas << endl;
            }
};

int main(){
    LuaspersegiPanjang selena;
    selena.inputData();
    selena.hitungLuas();
    selena.outputData();
}