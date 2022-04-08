#include <stdio.h>
#include <windows.h>
main()
{
    system("Color 2");
    int a = 0, sum = 0, max = 0, min = 0, i;
    // float rata;
    printf("Banyaknya Nilai yang akan Di input adalah : ");
    scanf("%d", &a);
    int(*data)[0];

    for (i = 0; i < a; i++)
    {
        printf("Input elemen ke  %d :", i + 1);
        scanf("%d", &data[i]);
    }
    printf("Data yang telah di input adalah : ");
    printf("Data i : %d", &data[i]);
    // for (i = 0; i < a; i++)
    // {
    //     printf('%d ,', data[i]);
    //     sum = sum + data[i];
    //     if (max < data[i])
    //     {
    //         max = data[i];
    //     }
    //     if (min > data[i])
    //     {
    //         min = data[i];
    //     }
    // }
    // rata = sum / a;
    // printf("\n Jumlah Data : %d\n Rata-Rata : %.2f\n Terkecil : %d\n Terbesar : %d", sum, rata, min, max);
}