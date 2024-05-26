#include <stdio.h>

int main() {
    int x = 10;

    // Contoh penggunaan if-else
    if (x > 0) {
        printf("x adalah bilangan positif.\n");
    } else {
        printf("x bukanlah bilangan positif.\n");
    }

    // Contoh penggunaan if-else if-else
    if (x > 0) {
        printf("x adalah bilangan positif.\n");
    } else if (x < 0) {
        printf("x adalah bilangan negatif.\n");
    } else {
        printf("x adalah nol.\n");
    }

    int i = 10;
    int j = 20;

    if (i > 0  && j > 00){
         printf("i dan j adalah bilangan positif.\n");
    }

    return 0;
}
