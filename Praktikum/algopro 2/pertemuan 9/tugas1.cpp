#include <iostream>
#include <cstdlib>
using namespace std;
int SeqSearch1(int Data[], int n, int x, bool *ketemu);
void randomData(int Data[], int jmlDat);
int main()
{
    int x, i, jmlDat;
    cout << "Masukkan Banyak Data random : ";
    cin >> jmlDat;
    int Data[jmlDat];
    // generate Data Random
    randomData(Data, jmlDat);
    bool ketemu;
    cout << "Elemen Array : ";
    for (i = 0; i < jmlDat; i++)
    {
        cout << Data[i] << " ";
        cout << endl;
        cout << "Masukan data yang akan dicari ?: ";
        cin >> x;
        SeqSearch1(Data, jmlDat, x, &ketemu);
        if (ketemu != false)
        {
            cout << "Data yang dicari ditemukan Di Indeks - " << SeqSearch1(Data, jmlDat, x, &ketemu) << endl;
        }
        else
        {
            cout << "Data yang dicari tidak ada dalam array " << endl;
        }
    }
}

int SeqSearch1(int Data[], int n, int x, bool *ketemu)
{
    int i = 0;
    while (i < n - 1 && Data[i] != x)
        i++;
    if (Data[i] == x)
    // mereturn boolean dan indeks;
    {
        *ketemu = true;
        return i + 1;
    }
    else
        *ketemu = false;
}

void randomData(int Data[], int jmlDat)
{
    for (int j = 0; j < jmlDat; j++)
    {
        Data[j] = rand() % 100 + 1; // 1-100
    }
};
