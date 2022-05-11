#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, k, b1, k1, b2, k2, jumlah = 0;
    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> b1;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> k1;

    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> b2;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> k2;

    if (k1 != b2)
    {
        cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
    }
    else
    {
        cout << "Menjadi Matriks " << b1 << " x " << k2 << "\n";
        cout << "Masukkan elemen matriks pertama: \n";
        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < k1; j++)
            {
                cin >> matriks1[i][j];
            }
        }
        cout << "\n\nMatriks Pertama: \n\n";
        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < k1; j++)
            {
                cout << setw(10) << matriks1[i][j];
            }
            cout << endl;
        }

        cout << "Masukkan elemen matriks kedua: \n";
        for (i = 0; i < b2; i++)
        {
            for (j = 0; j < k2; j++)

            {
                cin >> matriks2[i][j];
            }
        }
        cout << "\n\nMatriks Kedua: \n\n";
        for (i = 0; i < b2; i++)
        {
            for (j = 0; j < k2; j++)

            {
                cout << setw(10) << matriks2[i][j];
            }
            cout << endl;
        }

        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < k2; j++)
            {
                for (k = 0; k < b2; k++)
                {
                    jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }

        cout << "Hasil perkalian matriks: \n";
        for (i = 0; i < b1; i++)
        {
            for (j = 0; j < k2; j++)
            {
                cout << setw(10) << hasil[i][j];
            }
            cout << endl;
        }
    }
}