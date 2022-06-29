#include <iostream>
#include <iomanip>
using namespace std;

void tampil();
struct mhs
{
    int NIM;
    char *Nama;
    short ThnMasuk;
};

int main()
{
    mhs m[6];
    m[0].NIM = 110;
    m[0].Nama = "BUDI";
    m[0].ThnMasuk = 2000;

    m[1].NIM = 107;
    m[1].Nama = "SUSAN ";
    m[1].ThnMasuk = 1999;

    m[2].NIM = 142;
    m[2].Nama = "WAWAN ";
    m[2].ThnMasuk = 2001;

    m[3].NIM = 205;
    m[3].Nama = "ENDI ";
    m[3].ThnMasuk = 2002;

    m[4].NIM = 104;
    m[4].Nama = "HANIF";
    m[4].ThnMasuk = 1999;

    m[5].NIM = 108;
    m[5].Nama = "YUDI";
    m[5].ThnMasuk = 1999;
    int pilih, i, j, temp;
    short cari;
    enum option
    {
        getAllData = 1,
        searchByNim,
        ASC,
        DESC,
        changeName,
        stop
    };

    do
    {
        tampil();
        cout << "Pilih Menu ? ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            for (i = 0; i < 6; i++)
            {
                cout << "NIM :" << m[i].NIM << endl;
                cout << "Nama :" << m[i].Nama << endl;
                cout << "Tahun Masuk :" << m[i].ThnMasuk << endl
                     << endl;
            }
            system("pause");
            system("cls");
            break;
        case 2:
            cout << "Cari Berdasarkan Nim : ";
            cin >> cari;
            for (i = 0; i < 5; i++)
            {
                if (m[i].NIM == cari)
                {
                    cout << "NIM :" << m[i].NIM << endl;
                    cout << "Nama :" << m[i].Nama << endl;
                    cout << "Tahun Masuk :" << m[i].ThnMasuk << endl
                         << endl;
                }
            }
            system("pause");
            system("cls");
            break;
        case 3:

            for (i = 1; i < 6; i++)
            {
                for (j = i; j > 0; j--)
                {
                    if (m[j].NIM < m[j - 1].NIM)
                    {
                        temp = m[j].NIM;
                        m[j].NIM = m[j - 1].NIM;
                        m[j - 1].NIM = temp;
                    }
                }
            }
            cout << "Data Diurutkan Secara Menaik " << endl;
            for (i = 0; i < 6; i++)
            {
                cout << "NIM :" << m[i].NIM << endl;
                cout << "Nama :" << m[i].Nama << endl;
                cout << "Tahun Masuk :" << m[i].ThnMasuk << endl
                     << endl;
            }
            system("pause");
            system("cls");
            break;
        case 4:
            for (i = 1; i < 6; i++)
            {
                for (j = i; j > 0; j--)
                {
                    if (m[j].NIM > m[j - 1].NIM)
                    {
                        temp = m[j].NIM;
                        m[j].NIM = m[j - 1].NIM;
                        m[j - 1].NIM = temp;
                    }
                }
            }
            cout << "Data Diurutkan Secara Menurun " << endl;
            for (i = 0; i < 6; i++)
            {
                cout << "NIM :" << m[i].NIM << endl;
                cout << "Nama :" << m[i].Nama << endl;
                cout << "Tahun Masuk :" << m[i].ThnMasuk << endl
                     << endl;
            }
            system("pause");
            system("cls");
            break;
        case 5:
            cout << "\n\nCari Berdasarkan Nim : ";
            cin >> cari;
            for (i = 0; i < 6; i++)
            {
                if (m[i].NIM == cari)
                {
                    cout << "\nUbah Data namanya " << endl;
                    cin >> m[i].Nama;
                    cout << "\nData Sudah Diganti namanya " << endl;
                    cout << "NIM :" << m[i].NIM << endl;
                    cout << "Nama :" << m[i].Nama << endl;
                    cout << "Tahun Masuk :" << m[i].ThnMasuk << endl
                         << endl;
                }
            }
            system("pause");
            system("cls");
            break;
        default:
            cout << "\n\nTerima Kasih \n\n";
            break;
        }
    } while (pilih != stop);
}

void tampil()
{
    cout << setw(39) << "Menu Pilihan" << endl;
    cout << setw(50) << "---------------------------------" << endl;
    cout << setw(50) << "  1. Tampilkan Semua Data        " << endl;
    cout << setw(50) << "  2. Cari Data NIM               " << endl;
    cout << setw(50) << "  3. Urutkan Data Secara Menaik  " << endl;
    cout << setw(50) << "  4. Urutkan Data Secara Menurun " << endl;
    cout << setw(50) << "  5. Ubah Nama Data              " << endl;
    cout << setw(50) << "  6. Berhenti                    " << endl;
    cout << setw(50) << "---------------------------------" << endl;
}