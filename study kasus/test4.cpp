// Penyimpanan & Pembacaan data secara random, data ditulis sekaligus
#include <iostream>
#include <stdio.h>
using namespace std;

FILE *fp;
int main(void)
{
    int i, j, jml_dat, k[100];
    fp = fopen("C:\\kodingan\\belajar-cpp\\study kasus\\data1.dat", "w");
    if (fp == NULL)
        cout << "Error membuka berkas" << endl;
    else
    {
        for (i = 0; i <= 10; i++)
            k[i] = i;
        fwrite(k, sizeof(i), 11, fp);
        fclose(fp);
    }
    fp = fopen("C:\\kodingan\\belajar-cpp\\study kasus\\data1.dat", "r");
    if (fp == NULL)
        cout << "Error membuka berkas" << endl;
    else
    {
        i = 0;
        rewind(fp);
        while (!feof(fp))
        {
            fread(&k[i], sizeof(int), 1, fp);
            i++;
        }
        fclose(fp);
    }
    jml_dat = i - 1;
    cout << "Jumlah data = " << jml_dat << endl;
    for (j = 0; j < jml_dat; j++)
        cout << k[j] << " ";
    cout << endl;
}