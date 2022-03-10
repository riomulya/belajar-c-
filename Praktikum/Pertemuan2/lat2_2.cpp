//// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>

main()
{
    printf("=======================================================\n");
    printf("|     program menghitung luas dan volume Balok        |\n");
    printf("=======================================================\n\n");
    int panjang, lebar, tinggi, luas, volume;
    printf("Masukkan panjang :");
    scanf("%d", &panjang);
    printf("Masukkan lebar :");
    scanf("%d", &lebar);
    printf("Masukkan tinggi :");
    scanf("%d", &tinggi);
    luas = (2 * panjang * lebar) + (2 * panjang * tinggi) + (2 * tinggi * lebar);
    volume = panjang * lebar * tinggi;
    printf("Jadi luasnya adalah : %d\n", luas);
    printf("Jadi volumenya adalah : %d\n", volume);
}