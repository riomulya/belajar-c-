// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>
main()
{
    int nilai;
    printf("Masukkan sebuah nilai :");
    scanf("%d", &nilai);
    if (nilai >= 81 && nilai <= 100)
    {
        printf(" A\n");
    }
    else if (nilai >= 71 && nilai < 81)
    {
        printf(" B\n");
    }
    else if (nilai >= 61 && nilai < 71)
    {
        printf(" C\n");
    }
    else if (nilai >= 51 && nilai < 61)
    {
        printf(" D\n");
    }
    else if (nilai < 51)
    {
        printf(" E\n");
    }
    else
    {
        printf(" Nilai Tidak diketahui\n");
    }
}