#include <stdio.h>

int globalVar = 10; // Variabel global

void func() {
    printf("Nilai globalVar: %d\n", globalVar); // Variabel global dapat diakses dari dalam fungsi
}

int main() {
    printf("Nilai globalVar: %d\n", globalVar); // Variabel global dapat diakses dari dalam fungsi main
    func();
    return 0;
}
