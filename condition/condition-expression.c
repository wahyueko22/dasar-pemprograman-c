#include <stdio.h>

int main() {
    int x = 11;
    int y = 3;
    int result;

    result = (x > y) ? x : y;
    printf("result :\t%d\n", result);
    return 0;
}
