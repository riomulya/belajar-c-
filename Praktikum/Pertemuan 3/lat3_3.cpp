// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>

main()
{
    signed int x;
    printf("Masukkan Nilai : ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("-- bilangan Negatif -- \n");
    }
    else if (x > 0)
    {
        printf("++ bilangan Positif ++\n");
    }
    else if (x == 0)
    {
        printf("  bilangan 0 \n");
    }
    else
    {
        printf("Salah Memasukkan Nilai\n");
    }
}