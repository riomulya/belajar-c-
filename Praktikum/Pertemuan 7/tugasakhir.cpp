// Rio Mulya Syawal
// 02TPLP015
// 211011401091

#include <iostream>
int ganjil(int bilGanjil);
int genap(int bilGenap);

using namespace std;

int main()
{
    int input;
    cout << "Masukkan Banyak Deret : ";
    cin >> input;
    cout << "\nBillangan Ganjil : ";
    cout << ganjil(input);
    cout << "\n\nBillangan Genap : ";
    cout << genap(input);
}

int ganjil(int bilGanjil)

{
    for (int i = 1; i <= bilGanjil; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << " ";
        }
    }
}

int genap(int bilGenap)
{
    for (int i = 1; i <= bilGenap; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}