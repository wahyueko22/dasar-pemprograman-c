#include <stdio.h>

int main() {
    // Mendefinisikan variabel untuk operand
    int operand1 = 10;
    int operand2 = 5;
    int hasil;

    // Penjumlahan
    hasil = operand1 + operand2;
    printf("Penjumlahan: %d + %d = %d\n", operand1, operand2, hasil);

    // Pengurangan
    hasil = operand1 - operand2;
    printf("Pengurangan: %d - %d = %d\n", operand1, operand2, hasil);

    // Perkalian
    hasil = operand1 * operand2;
    printf("Perkalian: %d * %d = %d\n", operand1, operand2, hasil);

    // Pembagian (hasil integer)
    hasil = operand1 / operand2;
    printf("Pembagian (hasil integer): %d / %d = %d\n", operand1, operand2, hasil);

    // Pembagian (hasil floating-point)
    float hasil_float = (float)operand1 / operand2; // Casting operand1 ke float untuk hasil float
    printf("Pembagian (hasil floating-point): %d / %d = %.2f\n", operand1, operand2, hasil_float);

    // Modulus (sisa pembagian)
    hasil = operand1 % operand2;
    printf("Modulus (sisa pembagian): %d %% %d = %d\n", operand1, operand2, hasil);

    return 0;
}
