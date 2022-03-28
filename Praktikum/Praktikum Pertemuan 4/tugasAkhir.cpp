//// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>

main()
{
    unsigned int Pembelian;
    printf(" ==================== Tugas Akhir ==========================\n\n");
    printf("Masukan Jumlah Pembelian anda  : ");
    scanf("%d", &Pembelian);
    switch (Pembelian)
    {
    case 100000 ... 199999:
        int disc, total;
        disc = Pembelian * 0.05;
        total = Pembelian - disc;
        printf("\nAnda Mendapatkan Discount Sebesar : %d\n\n", disc);
        printf("Anda Membayar Sebesar : %d\n\n", total);
        break;
    case 200000 ... 299999:
        printf("\nAnda Mendapatkan Gratis Tiket ke Yogya \n\n");
        printf("Anda Membayar Sebesar : %d\n\n", Pembelian);
        break;
    case 300000 ... 399999:
        printf("\nAnda Mendapatkan Tiket ke Bali \n");
        printf("Anda Membayar Sebesar : %d\n\n", Pembelian);
        break;
    case 400000 ... 499999:
        printf("\nAnda Mendapatkan Jam Tangan Rolex \n");
        printf("Anda Membayar Sebesar : %d\n\n", Pembelian);
        break;
    case 500000 ... 4294967295:
        printf("\nAnda Mendapatkan Tiket ke Swiss \n");
    }
}