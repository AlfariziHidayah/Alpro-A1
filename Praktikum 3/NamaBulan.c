/*Nama File : NamaBulan.c */
/*Deskripsi : Mengganti nilai angka menjadi nama bulan dengan int dari 1-12 */
/*Pembuat   : Alfarizi Hidayah - 24060121130083 */
/*Tgl Pembuatan : Selasa, 08-03-2022 15:26 WIB */

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus Lokal
    int b;

//Algoritma
    printf("Masukkan nilai angka dari 1 - 12 yang akan diubah ke dalam nama bulan :");
    scanf("%d",&b);

    switch (b){
    case 1 :
        printf("Januari");
        break;
    case 2 :
        printf("Februari");
        break;
    case 3 :
        printf("Maret");
        break;
    case 4 :
        printf("April");
        break;
    case 5 :
        printf("Mei");
        break;
    case 6 :
        printf("Juni");
        break;
    case 7 :
        printf("Juli");
        break;
    case 8 :
        printf("Agustus");
        break;
    case 9 :
        printf("September");
        break;
    case 10 :
        printf("Oktober");
        break;
    case 11 :
        printf("November");
        break;
    case 12 :
        printf("Desember");
        break;

    default:
        printf("Angka yang dimasukkan salah");
    }
    return 0;
}
