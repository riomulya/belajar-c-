//// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>

main()
{
    printf("=======================================================\n");
    printf("|     program contoh penggunaan operator logika       |\n");
    printf("=======================================================\n\n");
    int nilai, tugas;
    printf("Masukkan sebuah nilai :");
    scanf("%d", &nilai);
    printf("Masukkan nilai tugas :");
    scanf("%d", &tugas);
    if (nilai > 70 && tugas >= 75)
        printf("Lulus\n");
    else
        printf("Tidak Lulus\n");
}