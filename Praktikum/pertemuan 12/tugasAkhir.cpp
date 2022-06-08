// Urutkan data berikut dari besar ke kecil = 4, 8, 5, 9, 6, 2, 7, 5, 9, 5
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("Color 74");
    int n, m, temp;
    int data[] = {4, 8, 5, 9, 6, 2, 7, 5, 9, 5};
    int arrSize = sizeof(data) / sizeof(data[0]);
    cout << "Data Setelah Di Urutkan\n\n";
    for (n = arrSize - 1; n > 0; n--)
        for (m = 0; m < n; m++)
            if (data[m] < data[m + 1])
            {
                temp = data[m];
                data[m] = data[m + 1];
                data[m + 1] = temp;
            }
    for (n = 0; n < arrSize; n++)
    {
        cout << setw(4) << data[n];
    }
    cout << endl;
}