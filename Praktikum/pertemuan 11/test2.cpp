#include <iostream>
using namespace std;
#define banyak 100

struct siswa
{
    char nama[banyak], alamat[banyak], kelamin[banyak], telepon[banyak];
};
siswa datasiswa[10];

int main()
{
    char lanjut;
    int increment;
    cout << "Pencatatan Data Siswa";

repeat:
    cout << endl;
    cout << "Masukkan Nama Siswa : ";
    cin.getline(datasiswa[increment].nama, banyak);
    cout << endl;
    cout << "Masukkan alamat Siswa : ";
    cin.getline(datasiswa[increment].alamat, banyak);
    cout << endl;
    cout << "Masukkan kelamin Siswa : ";
    cin.getline(datasiswa[increment].kelamin, banyak);
    cout << endl;
    cout << "Masukkan telepon Siswa : ";
    cin.getline(datasiswa[increment].telepon, banyak);
    cout << endl;
    cout << "Nama Siswa : " << datasiswa[increment].nama << endl;
    cout << "Alamat Siswa : " << datasiswa[increment].alamat << endl;
    cout << "Kelamin Siswa : " << datasiswa[increment].kelamin << endl;
    cout << "Telepon Siswa : " << datasiswa[increment].telepon << endl;
    cout << "\nMau tambah data lagi [Y/T] : ";
    cin >> lanjut;
    if (lanjut == 'Y' || lanjut == 'y')
    {
        goto repeat;
    }
}