#include <iostream>
using namespace std;

float rataRata(int nilai[], int banyak);

int main()
{
    int banyak;
    cout << "Masukkan Banyak Data yang ingin di Hitung : ";
    cin >> banyak;
    int nilai[banyak];
    cout << "\n"
         << "Nilai Nya : \n";
    for (int i = 0; i < banyak; i++)
    {
        cout << "Nilai Ke " << i + 1 << " = ";
        cin >> nilai[i];
    }
    cout << rataRata(nilai, banyak) << endl;
}

float rataRata(int nilai[], int banyak)
{
    int temp = 0;
    for (int i = 0; i < banyak; i++)
    {
        temp += nilai[i];
    }
    float avg = float(temp) / banyak;
    return avg;
}