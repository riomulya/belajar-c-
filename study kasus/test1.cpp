#include <iostream>
#include <stdio.h>
using namespace std;

FILE *fp;

int main(void)
{
    int i = 0, k; // Menyimpan data ke file
    fp = fopen("C:\\kodingan\\belajar-cpp\\study kasus\\data1.dat", "w");
    if (fp == NULL)
        cout << "Error membuka berkas" << endl;
    else
    {
        for (i = 0; i <= 10; i++)
            fprintf(fp, "%d ", i);
        fclose(fp);
    }
    // Membaca data dari file
    fp = fopen("C:\\kodingan\\belajar-cpp\\study kasus\\data1.dat", "r");
    if (fp == NULL)
        cout << "Error membuka berkas" << endl;
    else
    {
        while (!feof(fp))
        {
            fscanf(fp, "%d ", &k);
            cout << k << " ";
        }
        cout << endl;
        fclose(fp);
    }
}