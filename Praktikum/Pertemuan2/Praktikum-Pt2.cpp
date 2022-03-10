// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>

main()
{
    printf("Program Untuk Menghitung Luas dan Volume Bola\n\n");
    float volume, luas, pi, r;
    pi = 3.14;
    printf("Masukkan Jari Jari Bola : ");
    scanf("%f", &r);
    volume = (4 * pi * r * r * r) / 3;
    luas = 4 * pi * r * r;
    printf("Maka Luas Bola Adalah : %f", luas);
    printf("\nMaka Volume Bola Adalah : %f\n", volume);
}
