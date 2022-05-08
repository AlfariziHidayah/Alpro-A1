// Nama File : BubbleSort.c
// Deskripsi : Mnegurutkan data dengan bubble sorting
// Pembuat : Alfarizi Hidayah
// Tanggal Pembuatan : Minggu, 8 Mei 2022


#include <stdio.h>

void bubbleSort(int arr[], int n){
    // Kamus Lokal
    int i, j, temp;

    // Algoritma
    for(i = 0; i < n; i++)
    {
        for(j=0; j < n-i-1; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    // Kamus
    int array[100], n, i, j;

    // Algoritma
    printf("Masukkan jumlah data : ");
    scanf("%d", &n);
    printf("Masukkan angka: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);
    printf("Sesudah Diurutkan : \n");
    for(i = 0; i < n; i++)
    {
    printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
