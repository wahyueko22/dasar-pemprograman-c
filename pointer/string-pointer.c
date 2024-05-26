#include <stdio.h>

int main() {
    // Deklarasi dan inisialisasi string menggunakan pointer
    char *str = "Hello, world!";
    
    // Mencetak alamat memori dari variabel pointer str
    printf("Alamat memori dari str: %p\n", (void *)&str);

    // Mengakses dan mencetak string menggunakan pointer
    printf("String: %s\n", str);
    
    // Mengakses dan mencetak karakter individu dalam string menggunakan pointer
    printf("Karakter pertama: %c\n", *str); // Output: H
    
    // Menampilkan string karakter per karakter
    printf("Mengakses string karakter per karakter:\n");
    while (*str != '\0') {
        printf("%c ", *str);
        str++; // Pindah ke karakter berikutnya dalam string
    }
    printf("\n");
    
    return 0;
}
