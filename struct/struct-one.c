#include <stdio.h>
#include <string.h>

// Deklarasi struktur untuk menyimpan informasi mahasiswa
struct Mahasiswa {
    int id;
    char nama[50];
    float nilai;
};

int main() {
    // Definisi atau deklarasi dan inisialisasi variabel struktur
    struct Mahasiswa mhs1;

    // Mengisi anggota struktur
    mhs1.id = 1;
    strcpy(mhs1.nama, "Alice");
    mhs1.nilai = 85.5;

    // Mencetak anggota struktur
    printf("ID Mahasiswa: %d\n", mhs1.id);
    printf("Nama Mahasiswa: %s\n", mhs1.nama);
    printf("Nilai Mahasiswa: %.2f\n", mhs1.nilai);

    // Mengubah nilai anggota struktur
    mhs1.nilai = 90.0;
    printf("Nilai Mahasiswa setelah perubahan: %.2f\n", mhs1.nilai);

    return 0;
}
