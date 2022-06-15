#include <iostream>
#include <iomanip>
#include <windows.h>
#define hstdout GetStdHandle(STD_OUTPUT_HANDLE)
using namespace std;

void insertionSort(int data[], int length);
void cetakArray(int data[], int length, string pesanAwal, string pesanAkhir);

int main()
{
    SetConsoleTextAttribute(hstdout, 10);
    int i, data[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};
    const int dataSize = (sizeof(data) / sizeof(data[0])) - 1;
    cetakArray(data, dataSize, "Sebelum Di Urutkan  : ", "");
    insertionSort(data, dataSize);
    SetConsoleTextAttribute(hstdout, 10);
    cetakArray(data, dataSize, "\n\nSesudah Di Urutkan  : ", "");
    getchar();
}

void insertionSort(int data[], int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (data[j] > data[j - 1])
            {
                int temp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = temp;
            }
        }
        SetConsoleTextAttribute(hstdout, 12);
        cout << "\nStep ke - " << i;
        cetakArray(data, length, "\nProses Sorting-nya\n", "_______________________________________________________________________");
    }
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