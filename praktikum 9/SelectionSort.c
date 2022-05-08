// Nama File : SelectionSort.c
// Deskripsi : Mnegurutkan data dengan Selection sorting
// Pembuat : Alfarizi Hidayah
// Tanggal Pembuatan : Minggu, 8 Mei 2022

#include <stdio.h>

void SelectionSort(int arr[], int n)
{
    //Kamus Lokal
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for(i = 0; i < (n-1); i++)
    {
        min = i;

        for(j = (i+1); j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    //Kamus
    int array[100] ,n ,i, j;

    //Algoritma
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    printf("Masukkan %d angka integer\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    SelectionSort(array, n);
    printf("Sesudah Diurutkan : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
