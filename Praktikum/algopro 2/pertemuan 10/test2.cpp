#include <iostream>
#define nil 8
using namespace std;

int main()
{
    int arr[nil] = {81, 76, 21, 18, 16, 13, 10, 7};
    bool ketemu = false;
    int awal, akhir, tengah;
    int cari;
    cout << "Element array :";
    for (int i = 0; i < nil; i++)
    {
        cout << arr[i] << " ";
    }
    awal = 0;
    akhir = 7;
    cout << endl;
    cout << "Masukan data yang ingin dicari : ";
    cin >> cari;
    do
    {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == cari)
        {
            ketemu = true;
        }
        else if (arr[tengah] < cari)
        {
            akhir = tengah - 1;
        }
        else
        {
            awal = tengah + 1;
        }
    } while (awal <= akhir && ketemu == false);
    if (ketemu == true)
    {
        cout << "Angka yang dicari ada di index " << (awal + akhir) / 2;
    }
    else
    {
        cout << "Angka yang dicari tidak ada";
    }
}