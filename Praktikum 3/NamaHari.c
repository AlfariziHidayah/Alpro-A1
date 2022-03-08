/*Nama File : NamaBulan.c */
/*Deskripsi : Mengganti nilai angka menjadi nama hari dengan int dari 1 - 7 */
/*Pembuat   : Alfarizi Hidayah - 24060121130083 */
/*Tgl Pembuatan : Selasa, 08-03-2022 15:26 WIB */

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus Lokal
    int b;

//Algoritma
    printf("Masukkan nilai angka dari 1 - 7 yang akan diubah ke dalam nama hari :");
    scanf("%d",&b);

    switch (b){
    case 1 :
        printf("Senin");
        break;
    case 2 :
        printf("Selasa");
        break;
    case 3 :
        printf("Rabu");
        break;
    case 4 :
        printf("Kamis");
        break;
    case 5 :
        printf("Jumat");
        break;
    case 6 :
        printf("Sabtu");
        break;
    case 7 :
        printf("Minggu");
        break;
    default:
        printf("Angka yang dimasukkan salah");
    }
    return 0;
}
