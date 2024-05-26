#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("nonexistentfile.txt", "r");
    
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Mengembalikan 1 untuk menunjukkan kesalahan
    }
    
    // Proses file di sini
    
    fclose(file);
    return 0; // Mengembalikan 0 untuk menunjukkan sukses
}
