
#include <iostream>
using namespace std;
void selectionSortMax(int data[], int n);
void cetakDataArray(int value[], int length, string pesan);

int main()
{
    int i, data[] = {25, 27, 10, 8, 76, 21};
    const int arrSize = sizeof(data) / sizeof(data[0]); // Menghitung panjang data
    cetakDataArray(data, arrSize, "Sebelum Di Urutukan : ");
    selectionSortMax(data, arrSize);
    cetakDataArray(data, arrSize, "\n\nSesudah Di Urutukan : ");
}

void selectionSortMax(int array1[], int n)
{
    int i, j, imaks;
    for (i = n; i > 0; i--)
    {
        imaks = i;
        for (j = 0; j < i; j++)
        {
            if (array1[j] > array1[imaks])
                imaks = j;
        }
        cout << "\nProses yang terjadi di dalam selection sort" << endl;
        for (int k = 0; k < n + 1; k++)
        {
            cout << array1[k] << " ";
        }
        cout << endl;
        swap(array1[i], array1[imaks]);
    }
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