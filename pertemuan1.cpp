//  Nama : Rio Mulya Syawal
//  Nim : 211011401091
//  Kelas : 02TPLP015

#include <iostream>
using namespace std;

int main()
{
    cout << "Program Menghitung Luas dan Keliling segitiga\n"
         << endl;
    float a, b, c, t;
    cout << "Masukan Alas atau sisi pertama ";
    cin >> a;
    cout << endl;
    cout << "Masukan sisi kedua ";
    cin >> b;
    cout << endl;
    cout << "Masukan sisi ketiga ";
    cin >> c;
    cout << endl;
    cout << "Masukan tinggi segitiga ";
    cin >> t;
    cout << endl;

    cout << "Luas Segitiga adalah : " << a * t / 2;
    cout << endl;
    cout << "Keliling Segitiga adalah : " << a + b + c;
}

