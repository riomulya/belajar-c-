#include <iostream>
using namespace std;
main()
{
    int a[3][3], i, j;

    cout << "  Matriks 3 x 3 :";
    cout << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            cout << "  Input Baris " << (i + 1) << " , Kolom " << (j + 1) << " = ";

            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << "  Matriks 3 x 3 = " << endl
         << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " " << a[i][j];
        }
        cout << endl
             << endl;
    }
}
