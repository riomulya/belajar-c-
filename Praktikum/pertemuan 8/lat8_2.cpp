// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>
main()
{
    int square[100];
    int i, k;
    for (i = 0; i < 10; i++)
    {
        k = i + 1;
        square[i] = k * k;
        printf("\nPangkat dari %d adalah %d", k, square[i]);
    }
}