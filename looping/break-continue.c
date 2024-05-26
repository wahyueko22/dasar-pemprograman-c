#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 1) {
            continue; // lanjut ke awal loop jika i = 1
        }
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        printf("i = %d\n", i);
    }
    printf("Loop ended because of break.\n");
    return 0;
}
