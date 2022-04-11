// Rio Mulya Syawal
// 02TPLP015
// 211011401091

#include <stdio.h>

long fibonacci(long n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
main()
{
    int x;
    printf("masukan nilai fibonacci\n");
    printf("masukan nilai x : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        printf("nilai fibonacci ke %d = %d\n", i, fibonacci(i));
    }
}