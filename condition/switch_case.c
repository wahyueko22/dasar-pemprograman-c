#include <stdio.h>

int main() {
    int pilihan;

    printf("Masukkan angka (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Anda memilih angka satu.\n");
            break;
        case 2:
            printf("Anda memilih angka dua.\n");
            break;
        case 3:
            printf("Anda memilih angka tiga.\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
