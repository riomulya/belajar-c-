#include <iostream>
using namespace std;

void rubah();

int main()
{
    int A = 10, B = 20;
    cout << "Nilai Awal A dan B\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl
         << endl;
    rubah();
    cout << "Nilai A dan B Setelah Pemanggilan Prosedur\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl
         << endl;
}

void rubah()
{
    int A = 100, B = 200;
    cout << "Nilai A dan B dalam Fungsi Adalah \n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl
         << endl;
}