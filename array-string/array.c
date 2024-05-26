#include <stdio.h>

int main() {
    // Deklarasi array integer dengan 5 elemen
    int angka[5] = {1, 2, 3, 4, 5};

    // Mengakses dan mencetak elemen array
    for(int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    return 0;
}
