#include <iostream>
#define nBaris 5
#define nKolom 2
using namespace std;

void cetak(int A[][nKolom]);
void rubahData(int array[][nKolom]);

int main()
{
    int data[nBaris][nKolom] = {
        {23, 77},
        {33, 41},
        {20, 21},
        {20, 55},
        {67, 78}};
    cetak(data);
    cout << endl;
    rubahData(data);
    cetak(data);
    cout << endl;
}

void cetak(int A[][nKolom])
{
    for (int i = 0; i < nBaris; i++)
    {
        for (int j = 0; j < nKolom; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
};
void rubahData(int array[][nKolom])
{
    for (int i = 0; i < nBaris; i++)
    {
        for (int j = 0; j < nKolom; j++)
        {
            array[i][j] = 0;
        }
    }
};