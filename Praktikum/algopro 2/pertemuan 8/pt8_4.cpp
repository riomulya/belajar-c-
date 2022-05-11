#include <iostream>
#include <iomanip>
#define SIZE 10
using namespace std;

void cetak(int *A);
void jumlah(int *A, int *B);

int main()
{
    int A[SIZE] = {2, 4, 6, 3, 4, 2, 5, 6, 3, 2};
    int B[SIZE] = {1, 3, 5, 7, 2, 2, 4, 6, 3, 1};
    // cetak matrik A
    cout << "Nilai A    \t:";
    cetak(A);
    // cetak matrik B
    cout << "Nilai B    \t:";
    cetak(B);
    // jumlahkan matrik
    cout << "Jumlah A+B \t:";
    jumlah(A, B);
}

void cetak(int *A)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(3) << A[i];
    }
    cout << endl;
}

void jumlah(int *A, int *B)
{
    int C[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        C[i] = A[i] + B[i];
    }
    cetak(C);
}
