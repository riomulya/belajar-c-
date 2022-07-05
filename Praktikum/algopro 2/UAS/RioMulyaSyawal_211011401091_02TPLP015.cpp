// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream berkas;
    berkas.open("RioMulyaSyawal_211011401091_02TPLP015.txt", ios::out);
    if (berkas.is_open())
    {
        string tulisNama, tulisNim, tulisKelas;
        cout << "Tulis Nama : ";
        getline(cin >> ws, tulisNama);
        cout << endl;
        cout << "Tulis Nim : ";
        getline(cin >> ws, tulisNim);
        cout << endl;
        cout << "Tulis Kelas : ";
        getline(cin >> ws, tulisKelas);
        berkas << "Nama : " << tulisNama << "\n\n";
        berkas << "Nim : " << tulisNim << "\n\n";
        berkas << "Kelas : " << tulisKelas << "\n\n";
        berkas.close();
    }
    berkas.open("RioMulyaSyawal_211011401091_02TPLP015.txt", ios::in);
    cout << endl;
    cout << "Data Di Dalam File Adalah" << endl;
    if (berkas.is_open())
    {
        string baca;
        while (getline(berkas >> ws, baca))
        {
            cout << baca << endl;
        }
        berkas.close();
    }
}