// RIo Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>
main()
{
    int panjang;
    printf("Masukkan Panjang Deret Yang di Inginkan : ");
    scanf("%d", &panjang);
    printf("\nGanjil : ");
    for (int i = 1; i <= panjang; i++)
    {
        if (i % 2 == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\nGenap : ");
    for (int i = 1; i <= panjang; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
}