#include <iostream>
using namespace std;

int faktorial(int nilai);

int main()
{
    int value;
    cout << "Masukkan Nilai Faktorial : ";
    cin >> value;
    cout << endl;
    cout << "Hasilnya : ";
    cout << faktorial(value);
}

int faktorial(int nilai)
{
    if (nilai == 0)
    {
        return 1;
    }
    else
    {
        return nilai * faktorial(nilai - 1);
    }
}