/*Mengurutkan data dengan metode Penyisipan*/
#include <iostream>
#include <iomanip>
#define N 10 /*Jumlah data*/
using namespace std;
void InsertionSort(int data[], int n); /*prototipe
 fungsi*/
int main()
{
    int i;
    int n = N - 1;
    int data[] = {20, 10, 32, 100, 60, 12, 70, 25, 45, 65};
    cout << "Sebelum diurutkan :" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;
    cout << "_______________________________"
         << endl;
    InsertionSort(data, n);
    cout << "Setelah diurutkan" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;
}
void InsertionSort(int array1[], int n)
{
    int i, j, x;
    bool ketemu;
    for (i = 1; i <= n; i++)
    {
        x = array1[i];
        j = i - 1;
        ketemu = false;
        cout << "\n\nProses Sortingnya" << endl;
        for (int k = 0; k <= n; k++)
        {
            cout << setw(5) << array1[k];
        }
        cout << endl
             << endl;
        while ((j >= 0) && (!ketemu))
        {
            if (x < array1[j])
            {
                array1[j + 1] = array1[j];
                j = j - 1;
            }
            else
                ketemu = true;
        }
        array1[j + 1] = x;
    }
}