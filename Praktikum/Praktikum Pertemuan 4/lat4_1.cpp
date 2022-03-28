//// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>

main()
{
    int kdhari;
    printf(" ==================== program contoh program switch ==========================\n\n");
    printf("Masukan kode hari * 1 - 7  :");
    scanf("%d", &kdhari);
    switch (kdhari)
    {
    case 1:
        printf("Senin\n");
        break;
    case 2:
        printf("Selasa\n");
        break;
    case 3:
        printf("Rabu\n");
        break;
    case 4:
        printf("Kamis\n");
        break;
    case 5:
        printf("Jum\'at\n");
        break;
    case 6:
        printf("Sabtu\n");
        break;
    case 7:
        printf("Minggu\n");
        break;
    default:
        printf("Kode Tidak ada\n");
    }
}