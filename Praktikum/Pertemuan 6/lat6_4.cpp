// Rio Mulya Syawal
// 02TPLP051
// 211011401091

#include <stdio.h>

main()
{
    int init = 1, panjang;
    printf("Masukkan Panjang Deret : ");
    scanf("%d", &panjang);
    printf("\nGanjil : ");
    while (init < panjang)
    {
        if (init % 2 == 1)
        {
            printf("%d ", init);
        }
        init++;
    }
    // memberikan ulang nilai variabel init
    init = 1;
    printf("\nGenap : ");
    while (init < panjang)
    {
        if (init % 2 == 0)
        {
            printf("%d ", init);
        }
        init++;
    }
}