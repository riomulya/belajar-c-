#include <iostream>
#include <iomanip>
using namespace std;

struct karyawan
{
    string nama, gaji, status;
};
int main()
{
    int jumlah;
    char pilihStatus;
    cout << "\nPencatatan Data Karyawan \n";
    cout << "Masukkan Jumlah Karyawan : ";
    cin >> jumlah;
    karyawan dataKaryawan[jumlah];

    for (int i = 0; i < jumlah; i++)
    {
        cout << "\nMasukkan Nama Karyawan : ";
        getline(cin >> ws, dataKaryawan[i].nama);
        cout << "Masukkan gaji Karyawan : ";
        getline(cin >> ws, dataKaryawan[i].gaji);
        cout << "Masukkan status Karyawan \n";
        cout << "Sudah menikah [y/t] : ";
        cin >> pilihStatus;
        if (pilihStatus != 'y')
        {
            dataKaryawan[i].status = "Belum Menikah";
        }
        else
        {
            string anak;
            cout << "Anak Berapa ? : ";
            cin >> anak;
            dataKaryawan[i].status = "Sudah Menikah Mempunyai Anak " + anak;
        }
        cout << endl;
    };
    cout.flags(ios::left);
    cout << "----------------------------------------------------------------------------------\n";
    cout << "||" << setw(5) << "No"
         << "|" << setw(20) << "Nama"
         << "|" << setw(15) << "Gaji/Bulan"
         << "|" << setw(35) << "Status"
         << "||" << endl;
    cout << "==================================================================================\n";
    for (int j = 0; j < jumlah; j++)
    {
        cout << "||" << setw(5) << j + 1;
        cout << "|" << setw(20) << dataKaryawan[j].nama;
        cout << "|" << setw(15) << dataKaryawan[j].gaji;
        cout << "|" << setw(35) << dataKaryawan[j].status << "||";
        cout << endl;
    }
    cout << "==================================================================================\n";
}