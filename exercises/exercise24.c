#include <stdio.h>

int main() {
    long a = 1;
    long b = 1;
    long c = a + b;

    for (int i = 0; i < 18; i++) {
        printf("%ld ", a);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
    return 0;
}