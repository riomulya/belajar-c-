//  Nama : Rio Mulya Syawal
//  Nim : 211011401091
//  Kelas : 02TPLP015

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    printf(" Program Menghitung Jumlah Kata yang di Inputkan\n\n");
    unsigned int i, muncul = 0, *jml;
    jml = &muncul;
    char x[100];
    printf("Masukkan Kata yg ingin di hitung   : ");
    gets(x);

    for (i = 0; i < strlen(x); i++)
    {
        if (x[i] != ' ')
        {
            muncul++;
        }
    }
    printf("Ada %d Kata yang di inputkan \n\n", *jml);
    printf("Pembuktian Adanya Pointer \n\n");
    cout << " jml : " << *jml << endl;
    cout << " &jml : " << jml << endl;
    cout << " &muncul : " << &muncul << endl;
}