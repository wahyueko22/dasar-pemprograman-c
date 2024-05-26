#include <stdio.h>

void func(int localParam) {
    int localVar = 20; // Variabel lokal
    printf("Nilai localVar dalam func: %d \n", localVar); // Variabel lokal dapat diakses dari dalam fungsi
    printf("Nilai localParam dalam func: %d \n", localParam); // Variabel lokal dapat diakses dari dalam fungsi
}

int main() {
    int localVar = 30; // Variabel lokal
    printf("Nilai localVar dalam main: %d\n", localVar); // Variabel lokal dapat diakses dari dalam fungsi main
    func(5);
    return 0;
}
