// Nama File : BubbleSort.c
// Deskripsi : Mnegurutkan data dengan bubble sorting
// Pembuat : Alfarizi Hidayah
// Tanggal Pembuatan : Minggu, 8 Mei 2022


#include <stdio.h>

int main()
{
    //kamus lokal
    int A[15],B[15],C[100],i,j,n,k;
    //Algoritma
    printf("Masukkan jumlah data : ");
    scanf("%d",&n);
    printf("Masukkan angka : \n");
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
        if(A[i]>k){
            k = A[i];
        }
    }
    printf("\n");
    for(i=1;i<=n;i++){8
    }

    //logic
    for(i=0;i<=k;i++){
        C[i] = 0;
    }
    for(j=1;j<=n;j++){
        C[A[j]] = C[A[j]]+1;
    }
    for(i=1;i<=k;i++){
        C[i] = C[i] + C[i-1];
    }
    for(j=n;j>=1;j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    //printf sesudah
    printf("\n\n===sesudah===\n");
    for(i=n;i>=1;i--){
        printf("%d ",B[i]);
    }
    printf("\n");
    return 0;
}
