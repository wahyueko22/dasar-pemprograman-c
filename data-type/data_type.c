//ini berisi deklarasi fungsi-fungsi standar untuk input dan output, seperti printf
#include <stdio.h>
#include <limits.h> /* integer specifications */
#include <float.h> /* floating-point specifications */

// main adalah pintu utama masuk pemprogramn c
int main() {
    printf("Integer range:\t%d\t%d\n", INT_MIN, INT_MAX);
    printf("Long range:\t%ld\t%ld\n", LONG_MIN, LONG_MAX);
    printf("Float range:\t%e\t%e\n", FLT_MIN, FLT_MAX);
    printf("Double range:\t%e\t%e\n", DBL_MIN, DBL_MAX);
    printf("Long double range:\t%e\t%e\n", LDBL_MIN, LDBL_MAX);
    printf("Float-Double epsilon:\t%e\t%e\n", FLT_EPSILON, DBL_EPSILON);

    printf("void\tchar\tshort\tint\tlong\tfloat\tdouble\n");
    printf("%3d\t%3d\t%3d\t%3d\t%3d\t%3d\t%3d\n",
    sizeof (void), sizeof (char), sizeof (short), sizeof (int),
    sizeof (long), sizeof (float), sizeof (double));
    

    //rumus deklarasi variable : <modifier> <data type> <variable name> = <value1>

    int lower, upper; // deklarasi 2 variable integer belum terinisialisasi
    printf("upper sebelum inisialisasi :\t%d\n", upper);
    lower = 10; // initialisasi lower dengan 10
    upper = 20; // initialisasi upper dengan 20
    printf("upper sesudah inisialisasi :\t%d\n", upper);

    // cara deklarasi variable dengan tipe short, deklarasi short int a = 10 itu sama dengan short a = 10
    short a = 10;
    short int b = 10;
    printf("a + b:\t%d\n", a + b);

    //signed int
    signed int x = -10;
    printf("Signed integer: %d\n", x);
    // Unsigned integer
    unsigned int y = 20;
    printf("Unsigned integer: %u\n", y);

    const int MAX_VALUE = 100;
    // akan error jika di assign ulang variable MAX_VALUE
    // MAX_VALUE = 150;  
    printf("MAX_VALUE :\t%d\n", MAX_VALUE);

    return 0;
}
