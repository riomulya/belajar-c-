// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <iostream>
using namespace std;

int main()
{
    char nama[100], hobi[100];
    cout << "Masukkan Nama Anda : ";
    cin.getline(nama, 100);
    cout << "\nMasukkan Hobi Anda : ";
    cin.getline(hobi, 100);
    cout << endl;
    cout << "Nama Anda Adalah : " << nama << endl;
    cout << "Hobi Anda Adalah : " << hobi;
}