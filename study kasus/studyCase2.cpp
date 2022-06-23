#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <windows.h>
#define hstdout GetStdHandle(STD_OUTPUT_HANDLE)

int data[100], dataCopy[100], i, jml, temp; // menyimpan data;
char pilih;

using namespace std;

void tampil();
void greeting();
void menu();

int main()
{
    menu();
}

void identitas()
{
    SetConsoleTextAttribute(hstdout, 11);
    cout << "Nama  : Rio Mulya Syawal" << endl;
    cout << "Kelas : 02TPLP015" << endl;
    cout << "Nim   : 211011401091" << endl
         << endl;
}

void tampil()
{
    SetConsoleTextAttribute(hstdout, 12);
    cout << setw(39) << "Menu Pilihan" << endl;
    cout << setw(50) << "---------------------------------" << endl;
    cout << setw(50) << "  1. Masukkan Data               " << endl;
    cout << setw(50) << "  2. Simpan Data                 " << endl;
    cout << setw(50) << "  3. Baca Data                   " << endl;
    cout << setw(50) << "  4. Tampilkan Data Asal         " << endl;
    cout << setw(50) << "  5. Urutkan Data Secara Menaik  " << endl;
    cout << setw(50) << "  6. Tampilkan Data Terurut      " << endl;
    cout << setw(50) << "  7. Keluar                      " << endl;
    cout << setw(50) << "---------------------------------" << endl;
}

void menu()
{
    identitas();
    cout << "Lanjut Ke menu? [y/n] : ";
    cin >> pilih;
    pilih = tolower(pilih);
    if (pilih == 'y')
    {
        system("cls");
        goto ulang;
    }
ulang:
    tampil();
    SetConsoleTextAttribute(hstdout, 10);
    cout << endl;

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
        cout << "Data Sudah Dimasukkan \n\n";
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
        else
        {
            greeting();
        }
    }
    else if (pilihKondisi == 2)
    {
        fstream berkas;
        berkas.open("studiKasus.txt", ios::out);
        if (berkas.is_open())
        {
            for (int i = 0; i <= jml - 1; i++)
            {
                berkas << data[i] << " ";
            }
            cout << "\n Data telah di simpan di studiKasus.txt" << endl;
            berkas.close();
        }
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
        else
        {
            greeting();
        }
    }
    else if (pilihKondisi == 3)
    {
        fstream berkas;
        berkas.open("studiKasus.txt", ios::in);
        if (berkas.is_open())
        {
            string baca;
            for (i = 0; i < jml; i++)
            {
                berkas >> baca;
            }
            berkas.close();
            cout << "berkas dibaca" << endl;
        }
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
        else
        {
            greeting();
        }
    }
    else if (pilihKondisi == 4)
    {
        fstream berkas;
        berkas.open("studiKasus.txt", ios::in);
        cout << "Data Di Dalam File Asal Adalah" << endl;
        if (berkas.is_open())
        {
            string baca;
            while (getline(berkas, baca))
            {
                cout << baca << endl;
            }
            berkas.close();
        }
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
        else
        {
            greeting();
        }
    }
    else if (pilihKondisi == 5)
    {
        fstream berkas;
        berkas.open("datastudiKasusUrut.txt", ios::out);
        if (berkas.is_open())
        {
            for (i = 1; i <= jml - 1; i++)
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
            for (i = 0; i < jml; i++)
            {
                berkas << dataCopy[i] << " ";
            }
            berkas.close();
        }
        cout << "Data Sudah Terurut Naik\n"
             << endl;
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
        else
        {
            greeting();
        }
    }
    else if (pilihKondisi == 6)
    {
        fstream berkas;
        berkas.open("datastudiKasusUrut.txt", ios::in);
        cout << "Data Yang Sudah Terurut Di Dalam File Adalah" << endl;
        if (berkas.is_open())
        {
            string baca;
            while (getline(berkas, baca))
            {
                cout << baca << endl;
            }
            berkas.close();
        }
        cout << "Kembali Ke menu? [y/n] : ";
        cin >> pilih;
        if (pilih == 'y')
        {
            system("cls");
            goto ulang;
        }
        else
        {
            greeting();
        }
    }
    else
    {
        greeting();
    }
}

void greeting()
{
    cout << "Terima Kasih\n";
}