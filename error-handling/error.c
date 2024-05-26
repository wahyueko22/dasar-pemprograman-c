#include <stdio.h>



int main() {
    int b = 0;
    
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 1; // Kode kesalahan
    }

    return 0; // Berhasil
}
