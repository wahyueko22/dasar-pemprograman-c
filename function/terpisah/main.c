// main.c

#include <stdio.h>
#include "header.h"  // Sertakan file header
int main() {
    int hasil;
    
    // Panggil fungsi tambah
    hasil = tambah(3, 5);
    printf("Hasil penjumlahan: %d\n", hasil);
    
    return 0;
}
