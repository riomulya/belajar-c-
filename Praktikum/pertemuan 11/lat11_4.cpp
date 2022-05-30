#include <iostream>
using namespace std;

struct siswa
{
    string nama, alamat, kelamin, telepon;
};
siswa datasiswa;

int main()
{
    char lanjut;
    cout << "\nPencatatan Data Siswa \n";

repeat:
    cout << "\nMasukkan Nama Siswa : ";
    getline(cin >> ws, datasiswa.nama);
    cout << "\nMasukkan alamat Siswa : ";
    getline(cin >> ws, datasiswa.alamat);
    cout << "\nMasukkan kelamin Siswa : ";
    getline(cin >> ws, datasiswa.kelamin);
    cout << "\nMasukkan telepon Siswa : ";
    getline(cin >> ws, datasiswa.telepon);
    cout << "Nama Siswa : " << datasiswa.nama << endl;
    cout << "Alamat Siswa : " << datasiswa.alamat << endl;
    cout << "Kelamin Siswa : " << datasiswa.kelamin << endl;
    cout << "Telepon Siswa : " << datasiswa.telepon << endl;
    cout << "\nMau tambah data lagi [Y/T] : ";
    cin >> lanjut;
    if (lanjut == 'Y' || lanjut == 'y')
    {
        goto repeat;
    }
}