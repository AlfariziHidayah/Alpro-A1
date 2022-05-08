// Nama File : InsertionSort.c
// Deskripsi : Mnegurutkan data dengan Insertion sorting
// Pembuat : Alfarizi Hidayah
// Tanggal Pembuatan : Minggu, 8 Mei 2022

#include <stdio.h>


void InsertionSort(int arr[], int n)
{
    //Kamus Lokal
    int i, j ,temp;

    //Algoritma
    for (i = 1; i < n; i++)
    {
        temp = arr[i];

        for (j = i-1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

int main()
{
    //Kamus
    int n, array[100], i , j, temp;

    //Algoritma
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    printf("Masukkan angka: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    InsertionSort(array, n);
    printf("Sesudah Diurutkan : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
