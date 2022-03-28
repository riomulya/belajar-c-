//// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>

main()
{
    printf("=======================================================\n");
    printf("|program menghitung luas dan keliling persegi panjang |\n");
    printf("=======================================================\n\n");
    int panjang, lebar, luas, keliling;
    printf("Masukkan panjang : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar : ");
    scanf("%d", &lebar);
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    printf("Jadi luasnya adalah : %d\n", luas);
    printf("Jadi kelilingnya adalah : %d\n", keliling);
}