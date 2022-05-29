#include <iostream>
using namespace std;

struct siswa
{
    char nama[100], alamat[100], kelamin[100], telepon[100];
};
siswa datasiswa[10];

int main()
{
    char lanjut;
    int increment;
    cout << "\nPencatatan Data Siswa \n";

repeat:
    cout << "\nMasukkan Nama Siswa : ";
    cin >> datasiswa[increment].nama;
    cout << "\nMasukkan alamat Siswa : ";
    cin >> datasiswa[increment].alamat;
    cout << "\nMasukkan kelamin Siswa : ";
    cin >> datasiswa[increment].kelamin;
    cout << "\nMasukkan telepon Siswa : ";
    cin >> datasiswa[increment].telepon;
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