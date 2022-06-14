#include <iostream>
using namespace std;

int main()
{
    int cari, banyakDataRandom, i, *idx;
    bool ketemu = false;
    cout << "Genereta Random Data (banyak data random) : ";
    cin >> banyakDataRandom;
    int data[banyakDataRandom];
    for (i = 0; i < banyakDataRandom; i++)
    {
        data[i] = rand() % 100 + 1; // 1-100
    }
    for (i = 0; i < banyakDataRandom; i++)
        cout << "  " << data[i];
    cout << "\n\nCari Data : ";
    cin >> cari;
    for (i = 0; i < banyakDataRandom; i++)
    {
        if (data[i] == cari)
        {
            ketemu = true;
        }
    }
    if (ketemu)
    {
        cout << "Data Ditemukan";
    }
    else
    {
        cout << "Data tidak Ditemukan";
    }
}