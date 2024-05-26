#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10; // Panjang tetap untuk array
    int *arr;

    // tipe data integer itu anggap 2 byte / umumnya 4 byte terganting OS nya.  jika 10 blok integer berarti 10 * 2 = 20 byte
    // Mengalokasikan memori untuk array integer dengan panjang tetap n
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memori tidak cukup!\n");
        return 1; // Keluar jika memori tidak bisa dialokasikan
    }

    // Mengisi array dengan nilai
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Mengisi elemen array dengan nilai 1, 2, 3, ..., n
    }

    // Mencetak isi array
    printf("Isi array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Membebaskan memori yang dialokasikan
    free(arr);

    return 0;
}
