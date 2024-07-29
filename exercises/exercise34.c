#include <stdio.h>

int isAFactor(int m, int n) {
    // determines if m is a factor of n
    return n % m == 0;
}
