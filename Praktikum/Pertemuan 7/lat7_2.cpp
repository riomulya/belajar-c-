// Rio Mulya Syawal
// 02TPLP015
// 211011401091

#include <stdio.h>

int findmax(int n1, int n2);
void printmax(int m);
main()
{
    int i = 55;
    int j = 47;
    int k;
    k = findmax(i, j);
    printmax(k);
}
int findmax(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
void printmax(int m)
{
    printf(" bilangan yang terbesar adalah :%d\n", m);
}