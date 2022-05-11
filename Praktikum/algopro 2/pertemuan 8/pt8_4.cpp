#include <iostream>
#include <iomanip>
#define SIZE 10
using namespace std;

void cetak(int *A);
void cetakElemen(int el);
void kaliElemen(int *A, int el, int a);
void rubahArray(int A[]);

int main()
{
    int A[SIZE] = {2, 4, 6, 3, 4, 2, 5, 6, 3, 2};
    // cetak matrik A
    cetak(A);
    cetakElemen(A[2]);
    kaliElemen(A, 2, 10);
    // cetak A
    cetak(A);
    rubahArray(A);
    cetak(A);
}

void cetak(int *A)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(3) << A[i];
    }
    cout << endl;
}

void cetakElemen(int el)
{
    cout << "cetak elemen : " << el << endl;
};

void kaliElemen(int *A, int el, int a)
{
    A[el] *= a;
};

void rubahArray(int A[])
{
    for (int i = 0; i < SIZE; i++)
    {
        A[i] = A[i] + 2;
    }
};
