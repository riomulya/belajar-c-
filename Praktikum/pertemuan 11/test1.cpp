#include <iostream>
using namespace std;
struct data
{
    char nama[50];
    char alamat[100];
    char telepon[20];
    char kelamin[15];
};
data siswa[10];

int main()
{
    int i;
    char pil1;
    cout << "Masukkan Data Siswa" << endl;

datasiswa:
    cout << "Nama : ";
    cin >> siswa[i].nama;
    cout << "Alamat : ";
    cin >> siswa[i].alamat;
    cout << "Telepon : ";
    cin >> siswa[i].telepon;
    cout << "Jenis Kelamin : ";
    cin >> siswa[i].kelamin;

    cout << "Hasil " << endl;
    cout << "=======================" << endl;
    cout << "Nama : " << siswa[i].nama << endl;
    cout << "Alamat : " << siswa[i].alamat << endl;
    cout << "Telepon : " << siswa[i].telepon << endl;
    cout << "Jenis Kelamin : " << siswa[i].kelamin << endl;
    cout << " Mau Tambah Data Lagi [Y/T] : ";
    cin >> pil1;
    switch (pil1)
    {
    case 'Y':
    case 'y':
        goto datasiswa;
        break;
    case 'T':
    case 't':
        break;
    default:
        cout << "Data Tidak Ada ";
    }
}