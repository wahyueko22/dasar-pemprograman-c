#include <stdio.h>

int main() {
    // Deklarasi dan inisialisasi string menggunakan array karakter
    char salam1[] = "Halo, dunia!";
    
    // Deklarasi dan inisialisasi string menggunakan pointer karakter
    char *salam2 = "Selamat datang!";

    // Mencetak string
    printf("%s\n", salam1);
    printf("%s\n", salam2);

    return 0;
}
