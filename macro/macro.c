#include <stdio.h>

// Mendefinisikan makro untuk nilai konstanta
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    // Menggunakan makro untuk nilai konstanta
    printf("Nilai PI: %.2f\n", PI);

    // Menggunakan makro untuk fungsi sederhana
    int x = 5, y = 10;
    printf("Maksimum dari %d dan %d adalah %d\n", x, y, MAX(x, y));

    return 0;
}
