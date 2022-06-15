#include <iostream>
#include <iomanip>
#include <windows.h>
#define hstdout GetStdHandle(STD_OUTPUT_HANDLE)
using namespace std;

void insertionSort(int data[], int length);
void cetakArray(int data[], int length, string pesan);

int main()
{
    SetConsoleTextAttribute(hstdout, 10);
    int i, data[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};
    const int dataSize = (sizeof(data) / sizeof(data[0])) - 1;
    cetakArray(data, dataSize, "Sebelum Di Urutkan  : ");
    insertionSort(data, dataSize);
    SetConsoleTextAttribute(hstdout, 10);
    cetakArray(data, dataSize, "\n\nSesudah Di Urutkan  : ");
    getchar();
}

void insertionSort(int data[], int length)
{
    for (int i = 1; i <= length; i++)
    {
        int temp = data[i];
        int j = i - 1;

        while (j >= 0 && temp >= data[j])
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = temp;

        SetConsoleTextAttribute(hstdout, 12);
        cout << "\n\nProses Sortingnya Ke - " << i << endl;
        cetakArray(data, length, "-------------------------");
    }
}

void cetakArray(int data[], int length, string pesan)
{
    cout << pesan << endl;
    for (int i = 0; i <= length; i++)
    {
        cout << setw(5) << data[i];
    }
    cout << endl;
}