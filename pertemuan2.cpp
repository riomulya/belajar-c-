#include <stdio.h>
main()
{
    int beli, disc, total;
    printf("Masukkan Pebelian :");
    scanf("%d", &beli);
    if (beli >= 100000)
    {
        disc = 0.1 * beli;
        total = beli - disc;
    }
    else
    {
        disc = 0.05 * beli;
        total = beli - disc;
    }
    printf("Jadi Pembelian adalah : %d\n", beli);
    printf("Jadi Discount adalah : %d\n", disc);
    printf("Jadi Total Pembayaran adalah : %d\n", total);
}
