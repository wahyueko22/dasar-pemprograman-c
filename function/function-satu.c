#include <stdio.h>

// Prototipe fungsi
int tambah(int a, int b);

int main() {
    int hasil;
    
    // Panggil fungsi tambah
    hasil = tambah(3, 5);
    printf("Hasil penjumlahan: %d\n", hasil);
    
    // Panggil fungsi pesan
    pesan2();
    
    return 0;
}

// Definisi / implmentasi dari prototipe  fungsi tambah
int tambah(int a, int b) {
    return a + b;
}


void pesan2() {
    printf("Halo, selamat datang!\n");
}