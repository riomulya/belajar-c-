#include <iostream>
using namespace std;

void rubah(int A[], int B[]);

int main()
{
    int A, B;
    cout << "Nilai A : ";
    cin >> A;
    cout << endl;
    cout << "Nilai B : ";
    cin >> B;
    cout << endl;
    rubah(&A, &B);
    cout << "Nilai A dan B Setelah Pemanggilan Prosedur\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl
         << endl;
}

void rubah(int A[], int B[])
{
    int C;
    C = *B;
    *B = *A;
    *A = C;
}