// Rio Mulya Syawal
// 02TPLPL015
// 211011401091

#include <stdio.h>

int main()
{
    int n = 8, i;
    printf("|----|-----------------------|-----|\n"
           "| NO | MATA KULIAH           | SKS |\n"
           "|----|-----------------------|-----|\n"
           "| 1  | KALKULUS              |  4  |\n"
           "| 2  | FISIKA DASAR          |  3  |\n"
           "| 3  | PTI                   |  2  |\n"
           "| 4  | SISTEM DIGITAL        |  2  |\n"
           "| 5  | PSO                   |  2  |\n"
           "| 6  | LOGIKA MATEMATIKA     |  2  |\n"
           "| 7  | BAHASA INGGRIS        |  2  |\n"
           "| 8  | AGAMA                 |  2  |\n"
           "|----|-----------------------|-----|\n");
    int nilai[n];
    for (i = 1; i <= n; i++)
    {
        printf("\nData Nilai Matakuliah %d = ", i);
        scanf("%d", &nilai[i]);
        char huruf[1];
        char *a;
        a = huruf;
        switch (nilai[i])
        {
        case 85 ... 100:
            *a = 'A';
            break;
        case 75 ... 84:
            *a = 'B';
            break;
        case 65 ... 74:
            *a = 'C';
            break;
        case 55 ... 64:
            *a = 'D';
            break;
        case 1 ... 54:
            *a = 'E';
            break;
        }
        char bobot[1];
        char *b;
        b = bobot;
        switch (*a)
        {
        case 'A':
            *b = '4';
            break;
        case 'B':
            *b = '3';
            break;
        case 'C':
            *b = '2';
            break;
        case 'D':
            *b = '1';
            break;
        case 'E':
            *b = '0';
        }
        printf("Nilai : %c\nBobot : %c \n------------------------------", *a, *b);
    }
    printf("\n|----|-------------------|--------|-----|\n"
           "| NO | MATA KULIAH       | Nilai  | SKS |\n"
           "|----|-------------------|--------|-----|\n"
           "| 1  | KALKULUS          |   %d   |  4  |\n"
           "| 2  | FISIKA DASAR      |   %d   |  3  |\n"
           "| 3  | PTI               |   %d   |  2  |\n"
           "| 4  | SISTEM DIGITAL    |   %d   |  2  |\n"
           "| 5  | PSO               |   %d   |  2  |\n"
           "| 6  | LOGIKA MATEMATIKA |   %d   |  2  |\n"
           "| 7  | BAHASA INGGRIS    |   %d   |  2  |\n"
           "| 8  | AGAMA             |   %d   |  2  |\n"
           "|----|-------------------|--------|-----|\n",
           nilai[1], nilai[2], nilai[3], nilai[4], nilai[5], nilai[6], nilai[7], nilai[8]);
}
