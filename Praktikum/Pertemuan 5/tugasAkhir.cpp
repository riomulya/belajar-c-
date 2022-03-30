//  Nama : Rio Mulya Syawal
//  Nim : 211011401091
//  Kelas : 02TPLP015

#include <stdio.h>

main()
{
    printf("Masukkan Panjang Deret Fibonacci yg di inginkan : ");
    int panjang, after = 1, before = 0, total;
    scanf("%d", &panjang);

    for (int i = before; i <= panjang; i++)
    {
        printf("%d  ", before);
        total = after + before;
        before = after;
        after = total;
    }
}
