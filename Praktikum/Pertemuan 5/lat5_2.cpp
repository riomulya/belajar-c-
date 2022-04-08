// RIo Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>
main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i == 4)
            continue;
        printf(" bilangan: %d\n", i);
        if (i == 6)
            break;
    }
}