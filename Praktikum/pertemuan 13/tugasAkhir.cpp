#include <iostream>
using namespace std;

int main()
{
    int jumlah;
    cout << "Masukkan Jumlah data Yang Ingin Anda Masukkan : ";
    cin >> jumlah;
    int data[jumlah];
    cout << "\n\nMasukkan data-data nya : \n";
    for (int i = 0; i < jumlah; i++)
    {
        int input;
        cout << "Data Ke - " << i << " = ";
        cin >> input;
        data[i] = input;
    }
    for (int j = 0; j < jumlah; j++)
    {
        cout << data[j] << "   ";
    }
    int cari, ketemu, index;
    cout << "\n\nData Yang Ingin Dicari? : ";
    cin >> cari;
    for (int k = 0; k < jumlah; k++)
    {
        if (data[k] == cari)
        {
            ketemu = data[k];
            index = k;
            cout << "\n\nData Yang Anda Cari Ada Di Index ke : " << index;
        }
        else
        {
            cout << "\n\nData Yang Anda Cari Tidak Ada ";
        }
    }
}