//  Nama : Rio Mulya Syawal
//  Nim : 211011401091
//  Kelas : 02TPLP015

// #include <iostream>
// using namespace std;

// main()
// {
//     char kalimat[] = {"Selamat Belajar Visual C++"};
//     char *pKarakter;
//     int JumlahHurupKecil = 0;
//     int JumlahHurupBesar = 0;
//     pKarakter = kalimat;
//     while (*pKarakter)
//     {
//         char kar = *pKarakter;
//         if (kar >= 'a' && kar <= 'z')
//             JumlahHurupKecil++;
//         if (kar >= 'A' && kar <= 'Z')
//             JumlahHurupBesar++;
//         pKarakter++;
//     }
//     cout << "Jumlah Hurup Kecil = " << JumlahHurupKecil << endl;
//     cout << "Jumlah Hurup Kapital = " << JumlahHurupBesar << endl;
// }

#include <stdio.h>
#define JML_MHS 10 // Banyaknya Mahasiswa
#define JML_MK 5   // Jumlah mata Kuliah
main()
{
    int i, k;
    int *pNilaiMHS[JML_MHS], NILAI[JML_MHS][JML_MK];
    FILE *pF;
    for (i = 0; i <= JML_MHS - 1; i++)
    {
        pNilaiMHS[i] = NILAI[i];
    }
    if ((pF = fopen("D:\\document\\Kodingan\\belajar-c-\\Praktikum\\Pertemuan 5\\data.txt", "r")) == NULL)
    {
        printf("File tidak dapat dibuka\n");
    }
    else
    {
        for (i = 0; i < JML_MHS; i++)
            for (k = 0; k < JML_MK; k++)
                fscanf(pF, "%d", &NILAI[i][k]);
    }
    for (i = 0; i < JML_MHS; i++)
    {
        for (k = 0; k < JML_MK; k++)
        {
            printf("%d ", *pNilaiMHS[i]++);
        }
        printf("\n");
    }
    fclose(pF);
}