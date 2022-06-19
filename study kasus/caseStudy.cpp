#include <iostream>
#include <cstdio>
#include <iomanip>
#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"
using namespace std;

FILE *berkas;

void tampil();
void menu();

int main()
{
    menu();
}

void tampil()
{
    cout << RESET << setw(39) << "Menu Pilihan" << endl;
    cout << setw(50) << "---------------------------------" << endl
         << RED;
    cout << setw(50) << "  1. Masukkan Data               " << endl
         << RED;
    cout << setw(50) << "  2. Simpan Data                 " << endl
         << RED;
    cout << setw(50) << "  3. Baca Data                   " << endl
         << RED;
    cout << setw(50) << "  4. Tampilkan Data Asal         " << endl
         << RED;
    cout << setw(50) << "  5. Urutkan Data Secara Menaik  " << endl
         << RED;
    cout << setw(50) << "  6. Tampilkan Data Terurut      " << endl
         << RED;
    cout << setw(50) << "  7. Keluar                      " << endl
         << RESET;
    cout << setw(50) << "---------------------------------" << endl;
}

void menu()
{
    int k, q, data[100], dataCopy[100], i, jml, temp, pilihUrut; // menyimpan data;
    char pilih;
ulang:
    tampil();
    cout << endl
         << GREEN;

    int pilihKondisi;
    cout << "Masukkan Pilihan Anda : ";
    cin >> pilihKondisi;
    if (pilihKondisi == 1)
    {
        cout << "Masukkan Jumlah Data ?: ";
        cin >> jml;
        data[jml], dataCopy[jml];
        cout << "Masukkan Data ?: " << endl;
        for (int i = 0; i < jml; i++)
        {
            cout << "Data Ke " << i + 1 << " : ";
            cin >> data[i];
            dataCopy[i] = data[i];
        }
        system("cls");
        goto ulang;
    }
    else if (pilihKondisi == 2)
    {
        berkas = fopen("myfile.dat", "w");
        for (i = 0; i < jml; i++)
        {
            fprintf(berkas, "%d ", data[i]);
        }
        fclose(berkas);
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
    }
    else if (pilihKondisi == 3)
    {
        berkas = fopen("myfile.dat", "r");
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
    }
    else if (pilihKondisi == 4)
    {
        berkas = fopen("myfile.dat", "r");
        cout << "Data Di Dalam File Adalah" << endl;
        while (!feof(berkas))
        {
            fscanf(berkas, "%d ", &k);
            cout << k << " ";
        }
        cout << endl;
        fclose(berkas);
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
    }
    else if (pilihKondisi == 5)
    {
        for (i = 1; i <= jml; i++)
        {
            for (int j = i; j > 0; j--)
            {
                if (dataCopy[j] < dataCopy[j - 1])
                {
                    temp = dataCopy[j];
                    dataCopy[j] = dataCopy[j - 1];
                    dataCopy[j - 1] = temp;
                }
            }
        }
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
    }
    else if (pilihKondisi == 6)
    {
        berkas = fopen("myfileUrut.dat", "w");
        for (i = 0; i < jml; i++)
        {
            fprintf(berkas, "%d ", dataCopy[i]);
        }
        fclose(berkas);
        berkas = fopen("myfileUrut.dat", "r");
        cout << "Data Yang Sudah Terurut Di Dalam File Adalah" << endl;
        while (!feof(berkas))
        {
            fscanf(berkas, "%d ", &q);
            cout << q << " ";
        }
        cout << endl;
        fclose(berkas);
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
    }
}