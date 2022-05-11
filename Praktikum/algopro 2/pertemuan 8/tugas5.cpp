#include <iostream>
using namespace std;

int max(int a[], int banyak);

int main()
{
    int nilai;
    int data[nilai];
    cout << "Masukkan Banyak data : ";
    cin >> nilai;
    cout << "Masukkan Nilai : \n";
    for (int i = 0; i < nilai; i++)
    {
        cout << "Nilai Ke " << i + 1 << " = ";
        cin >> data[i];
    }
    cout << max(data, nilai) << endl;
}

int max(int a[], int banyak)
{
    int cari = 0;
    for (int i = 0; i < banyak; i++)
    {
        if (a[i] > cari)
        {
            cari = a[i];
        }
    }
    return cari;
}
