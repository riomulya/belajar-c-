// RIo Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>
main()
{
    // Program Mencetak "c++ sangat mudah" tidak lebih dari sepuluh dan tidak kurang dari 10
    // INPUT SESUAI USER TETAPI OUTPUT TETAP 10 KALI DIKELUARKAN
    int val, total;
cetak:
    total = 10 - val;
    for (int j = 0; j <= total; j++)
    {
        printf("c++ sangat mudah\n");
    }
    printf("Masukkan Nilai Yang anda inginkan : ");
    scanf("%d", &val);
    for (int i = 0; i <= val; i++)
    {

        if (val < 10)
        {
            goto cetak;
        }
        if (i == 10)
        {
            break;
        }
        printf("c++ sangat mudah\n");
    }
}