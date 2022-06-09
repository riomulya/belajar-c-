
#include <iostream>
using namespace std;
void selectionSortMin(int data[], int n);
void cetakDataArray(int value[], int length, string pesan);

int main()
{
    int i, data[] = {10, 40, 20, 60, 15, 4, 8, 100, 200, 25};
    const int arrSize = sizeof(data) / sizeof(data[0]); // Menghitung panjang data
    cetakDataArray(data, arrSize, "Sebelum Di Urutukan : ");
    selectionSortMin(data, arrSize);
    cetakDataArray(data, arrSize, "Sesudah Di Urutukan : ");
}
void selectionSortMin(int array1[], int n)
{
    int i, j, tmp, imin;
    for (i = 0; i <= n - 1; i++)
    {
        imin = i;
        for (j = i + 1; j <= n; j++)
        {
            if (array1[j] > array1[imin])
                imin = j;
        }
        swap(array1[i], array1[imin]);
    }
    cout << endl;
}

void cetakDataArray(int value[], int length, string message)
{
    cout << message << endl;
    for (int i = 0; i <= length; i++)
    {
        cout << value[i] << " ";
    }
    cout << endl
         << endl;
}