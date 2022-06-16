#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

FILE *berkas;

void tampil();

int main()
{
    int k; // menyimpan data;
    system("Color 74");
ulang:
    tampil();
    int pilihKondisi;
    cout << "Masukkan Pilihan Anda : ";
    cin >> pilihKondisi;
    if (pilihKondisi == 1)
    {
        berkas = fopen("myfile.dat", "w");
        int jml;
        cout << "Masukkan Jumlah Data ?: ";
        cin >> jml;
        int data[jml];
        cout << "Masukkan Data ?: " << endl;
        for (int i = 0; i < jml; i++)
        {
            cin >> data[i];
            fprintf(berkas, "%d ", data[i]);
        }
        fclose(berkas);
        system("cls");
        goto ulang;
    }
    else if (pilihKondisi == 3)
    {
        cout << "Data Di Dalam File Adalah" << endl;
        berkas = fopen("myfile.dat", "r");
        while (!feof(berkas))
        {
            fscanf(berkas, "%d ", &k);
            cout << k << " ";
        }
        cout << endl;
        fclose(berkas);
        char pilih;
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
    }
}

void tampil()
{
    cout << setw(39) << "Menu Pilihan" << endl;
    cout << setw(50) << "---------------------------------" << endl;
    cout << setw(50) << "| 1. Masukkan Data              |" << endl;
    cout << setw(50) << "| 2. Simpan Data                |" << endl;
    cout << setw(50) << "| 3. Baca Data                  |" << endl;
    cout << setw(50) << "| 4. Tampilkan Data Asal        |" << endl;
    cout << setw(50) << "| 5. Urutkan Data Secara Menaik |" << endl;
    cout << setw(50) << "| 6. Tampilkan Data Terurut     |" << endl;
    cout << setw(50) << "| 7. Keluar                     |" << endl;
    cout << setw(50) << "---------------------------------" << endl;
}