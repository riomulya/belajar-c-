#include <iostream>
#include <stdlib.h>
using namespace std;

void cariData(int cari);

int main()
{
    int cari, banyak;
    cout << "\nMasukkan Banyak Data Random : ";
    cin >> banyak;
    int data[banyak];
    for (int i = 0; i < banyak; i++)
    {
        data[i] = rand();
    }
    cout << "\n"
         << *data << endl;
    cout
        << "\nCari Data : ";
    cin >> cari;
    for (int i = 0; i < banyak; i++)
    {
        if (data[i] == cari)
        {
            cout << "\nData Berhasil Ditemukan Di indeks ke " << i << endl;
        }
        else
        {
            cout << "\nData Tidak Ada\n";
            break;
        }
    }
}
