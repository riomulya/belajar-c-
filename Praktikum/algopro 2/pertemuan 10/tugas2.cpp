#include <iostream>
using namespace std;
#define jmlDat 8
int BinSearch(int Data[], int n, int x, bool *cari);
int main()
{
    bool cari;
    int Data[jmlDat] = {81, 76, 21, 18, 16, 13, 10, 7}, x, i;
    cout << "Elemen Array : ";
    for (i = 0; i < jmlDat; i++)
    {
        cout << Data[i] << " ";
    }
    cout << endl;
    cout << "Masukan data yang akan dicari?: ";
    cin >> x;
    BinSearch(Data, jmlDat, x, &cari);
    if (cari == true)
    {
        cout << "Data yang dicari berada pada indeks : "
             << "[ " << BinSearch(Data, jmlDat, x, &cari) << " ]" << endl;
    }
    else
    {
        cout << "Data yang dicari tidak ada dalam array " << endl;
    }
}
int BinSearch(int Data[], int n, int x, bool *cari)
{
    *cari = false;
    int top = n - 1, bottom = 0, mid;
    while (bottom <= top && !*cari)
    {
        mid = (top + bottom) / 2;
        if (Data[mid] == x)
            *cari = true;
        else if (Data[mid] < x)
            top = mid - 1;
        else
            bottom = mid + 1;
    }
    if (*cari)
        return mid;
    else
        return *cari;
}