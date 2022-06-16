// Penyimpanan & Pembacaan data secara random
#include <iostream>
#include <stdio.h>
using namespace std;

FILE *fp;
int main(void)
{
    int i, j, jml_dat;
    int k[100];
    // Menulis data ke arsip
    fp = fopen("C:\\kodingan\\belajar-cpp\\study kasus\\data1.dat", "w");
    if (fp == NULL)
        cout << "Error membuka file" << endl;
    else
    {
        for (i = 0; i <= 10; i++)
            fwrite(&i, sizeof(i), 1, fp);
        fclose(fp);
    }
    // Membaca seluruh data data dari arsip
    fp = fopen("d:\\kampus\\program\\c++\\FileIO3\\data1.dat", "r");
    if (fp == NULL)
        cout << "Error membuka file" << endl;
    else
    {
        i = 0;
        while (!feof(fp))
        {
            fread(&k[i], sizeof(int), 1, fp);
            i++;
        }
        fclose(fp);
    }
    // Mencetak selauruh data ke layar
    jml_dat = i - 1;
    cout << "Jumlah data = " << jml_dat << endl;
    for (j = 0; j < jml_dat; j++)
        cout << k[j] << " ";
    cout << endl;
    fp = fopen("C:\\kodingan\\belajar-cpp\\study kasus\\data1.dat", "r");
    if (fp == NULL)
        cout << "Error membuka file" << endl;
    else
    {
        // Baca data ke-0
        fseek(fp, 0 * sizeof(j), SEEK_SET);
        fread(&j, sizeof(j), 1, fp);
        cout << "Data ke-0 = " << j << endl;
        // Baca data ke-1
        fseek(fp, 1 * sizeof(j), SEEK_SET);
        fread(&j, sizeof(j), 1, fp);
        cout << "Data ke-1 = " << j << endl;
        // Baca data ke-5
        fseek(fp, 5 * sizeof(j), SEEK_SET);
        fread(&j, sizeof(j), 1, fp);
        cout << "Data ke-5 = " << j << endl;
        // Baca data ke-0
        rewind(fp);
        fread(&j, sizeof(j), 1, fp);
        cout << "Data ke-0 = " << j << endl;
    }
}