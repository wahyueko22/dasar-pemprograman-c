#include <stdio.h>
#include <string.h>

// Deklarasi struktur untuk menyimpan informasi mahasiswa
typedef struct {
    int id;
    char nama[50];
    float nilai;
} Mahasiswa;


int main() {
    Mahasiswa mhs2;
    Mahasiswa *ptr = &mhs2;

    ptr->id = 2;
    strcpy(ptr->nama, "Bob");
    ptr->nilai = 78.5;

    printf("ID Mahasiswa: %d\n", ptr->id);
    printf("Nama Mahasiswa: %s\n", ptr->nama);
    printf("Nilai Mahasiswa: %.2f\n", ptr->nilai);

    return 0;
}
