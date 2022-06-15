#include <iostream>
#include <iomanip>
#include <windows.h>
#define hstdout GetStdHandle(STD_OUTPUT_HANDLE)

using namespace std;

void InsertionSort(int data[], int n, int start, int step);
void cetakArray(int data[], int length, string pesanAwal, string pesanAkhir);
void ShellSort(int data[], int n);

int main()
{
    SetConsoleTextAttribute(hstdout, 10);
    int i, data[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};
    const int dataSize = (sizeof(data) / sizeof(data[0])) - 1;
    cetakArray(data, dataSize, "Sebelum Di Urutkan  : ", "");
    ShellSort(data, dataSize);
    SetConsoleTextAttribute(hstdout, 10);
    cetakArray(data, dataSize, "\n\nSesudah Di Urutkan  : ", "");
    getchar();
}
void ShellSort(int data[], int n)
{
    int start, step;
    for (step = 5; step >= 1; step -= 2)
    {
        for (start = 0; start <= step; start++)
        {
            InsertionSort(data, n, start, step);
        }
    }
}
void InsertionSort(int data[], int length, int start, int step)
{
    for (int i = start + step; i <= length; i++)
    {
        int temp = data[i];
        int j = i - step;

        while (j >= 0 && temp >= data[j])
        {
            data[j + step] = data[j];
            j -= step;
        }
        data[j + step] = temp;
    }
    SetConsoleTextAttribute(hstdout, 12);
    cetakArray(data, length, "\nProses Sorting-nya\n", "_______________________________________________________________________");
}

void cetakArray(int data[], int length, string pesan, string pesanAkhir)
{
    cout << pesan << endl;
    for (int i = 0; i <= length; i++)
    {
        cout << setw(5) << data[i];
    }
    cout << endl;
    cout << pesanAkhir << endl;
}