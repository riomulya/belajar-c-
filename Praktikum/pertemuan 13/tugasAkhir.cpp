// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <iostream>
using namespace std;
void seqSearch(int data[], int length, int cari);
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
ulang:
    int cari;
    cout << "\n\nData Yang Ingin Dicari? : ";
    cin >> cari;
    seqSearch(data, jumlah, cari);
    char pilih;
    cout << "\nCari Lagi ? [y/t]";
    cin >> pilih;
    if (pilih == 'y' || pilih == 'Y')
    {
        goto ulang;
    }
}

void seqSearch(int data[], int length, int cari)
{
    bool ketemu = false;
    for (int k = 0; k < length; k++)
    {
        if (data[k] == cari)
        {
            length = k;
            ketemu = true;
        }
    }
    if (ketemu)
    {
        cout << "\n\nData Yang Anda Cari Ada Di Index ke : " << length;
    }
    else
    {
        cout << "Data Yang Dicari Tidak Ada";
    }
}