//// Rio Mulya Syawal
// 211011401091
// 02TPLP015
#include <stdio.h>
main()
{
    char choice;
    printf(" ==================== program Menghitung luas dan keliling ==========================\n\n");
    printf("Masukan Pilihan [S,P,L] Harus Kapital  : \n");
    printf(" Pilihan S : Segitiga \n");
    printf(" Pilihan P : Persegi Panjang \n");
    printf(" Pilihan L : Lingkaran \n\n");
    printf("Masukkan Pilihan : ");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'S':
        float a, t, l, k;
        printf(" ======== Menghitung Luas dan keliling Segitiga ============\n\n\n");
        printf("Masukkan Alas atau Sisi Segitiga  : ");
        scanf("%f", &a);
        printf("Masukkan Tinggi Segitiga  : ");
        scanf("%f", &t);
        l = (a * t) / 2;
        k = a + a + a;
        printf("Luas Segitiga : %.1f", l);
        printf("  dan Kelilingnya Adalah : %.1f \n\n", k);
        break;
    case 'P':
        int pan, le, luas, kel;
        printf(" ======== Menghitung Luas dan keliling Persegi Panjang ============\n\n\n");
        printf("Masukkan Panjang Persegi Panjang  : ");
        scanf("%d", &pan);
        printf("Masukkan Lebar Persegi Panjang  : ");
        scanf("%d", &le);
        luas = pan * le;
        printf("Luas Persegi Panjang : %d", luas);
        kel = 2 * pan + 2 * le;
        printf("  dan Kelilingnya Adalah : %d \n\n", kel);
        break;
    case 'L':
        float r, pi;
        pi = 3.14;
        printf(" ======== Menghitung Luas dan keliling Lingkaran ============\n\n\n");
        printf("Masukkan Jari Jari Lingkaran  : ");
        scanf("%f", &r);
        printf("Luas Lingkaran : %.2f", pi * r * r);
        printf("  dan Kelilingnya Adalah : %.2f \n\n", 2 * pi * r);
        break;
    default:
        printf("Kode Tidak ada\n");
    }
}