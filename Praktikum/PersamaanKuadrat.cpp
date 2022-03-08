// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main()
{
    int a, b, c, d;
    float xsatu, xdua;
    printf("Rumus Untuk Menghitung persamaan kuadrat ax^2+bx+c\n");
    printf("Masukkan Nilai a : ");
    scanf("%i", &a);
    printf("Masukkan Nilai b : ");
    scanf("%i", &b);
    printf("Masukkan Nilai c : ");
    scanf("%i", &c);
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        xsatu = (-b + sqrt(d)) / (2 * a);
        xdua = (-b - sqrt(d)) / (2 * a);
    }
    else if (d == 0)
    {
        xsatu = (-b + sqrt(d)) / (2 * a);
        xsatu = xdua;
    }
    else
    {
        printf("\nAkar Imajiner\n");
        exit();
    }
    printf("Maka X1 nya Adalah : %f", xsatu);
    printf(" dan X2 nya adalah : %f", xdua);
}