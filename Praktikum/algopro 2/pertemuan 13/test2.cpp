#include <iostream>
#define N 10 /*Jumlah data*/
using namespace std;
void InsertionSort(int data[], int n, int start, int step);
void ShellSort(int data[], int n);
int main()
{
    int i, n = N - 1;
    int data[] = {20, 10, 32, 100, 60, 12, 70, 25, 45, 65};
    cout << "Sebelum diurutkan :" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;
    cout << "_______________________________" << endl;
    ShellSort(data, n);
    cout << "Setelah diurutkan" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;
}
void ShellSort(int data[], int n)
{
    int start, step;
    for (step = 5; step >= 1; step -= 2)
    {
        for (start = 0; start <= step; start++)
            InsertionSort(data, n, start, step);
    }
}
void InsertionSort(int data[], int n, int start, int step)
{
    int i, j, x;
    bool ketemu;
    i = start + step;
    while (i <= n)
    {
        x = data[i];
        j = i - step;
        ketemu = false;
        while ((j >= 0) && (!ketemu))
        {
            if (x < data[j])
            {
                data[j + step] = data
                    [j];
                j = j - step;
            }
            else
                ketemu = true;
        }
        data[j + step] = x;
        i = i + step;
    }
}