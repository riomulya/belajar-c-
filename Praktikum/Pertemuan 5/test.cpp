#include <iostream>
#include <iomanip>
using namespace std;

main()
{
    const int KOLOM = 2;
    int(*pDuaDim)[KOLOM];
    pDuaDim = new int[3][KOLOM];
    pDuaDim[0][0] = 10;
    pDuaDim[0][1] = 20;
    pDuaDim[1][0] = 30;
    pDuaDim[1][1] = 40;
    pDuaDim[2][0] = 50;
    pDuaDim[2][1] = 60;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= KOLOM - 1; j++)
            cout << setw(3) << pDuaDim[i][j];
        cout << endl;
    }
    delete[] pDuaDim;
}